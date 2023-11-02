
@interface SpeakerRecognition.CSPlainAudioFileWriterHelper : NSObject <CSAudioFileWriter> {
    void fFile;
    void fileURL;
    void inASBD;
    void isWriting;
    void outASBD;
}

- (void).cxx_destruct;
- (bool)addSamples:(void*)arg1 numSamples:(unsigned long long)arg2;
- (void)dealloc;
- (bool)endAudio;
- (id)init;

@end
