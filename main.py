import sounddevice as sd
import scipy.io.wavfile as wav
import numpy as np

def record_voice(filename='my_recording.wav', duration=2, samplerate=44100):
    print(f"Recording for {duration} seconds...")

    # Start recording from mic
    recording = sd.rec(int(duration * samplerate), samplerate=samplerate, channels=1, dtype='int16')
    sd.wait()  # Wait until recording is finished

    # Save to .wav file
    wav.write(filename, samplerate, recording)
    print(f"Saved recording to '{filename}'")

if __name__ == '__main__':
    record_voice()

