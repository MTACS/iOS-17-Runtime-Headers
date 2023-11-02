
@interface CSAudioFileLog : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _asbd;
    struct OpaqueExtAudioFile { } * _audioFile;
    unsigned int  _audioLength;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_audioLogDirectory;
- (void)_closeAudioFile;
- (id)_getOrCreateAudioLogDirectory;
- (id)_makeTimestampedAudioLogFilenameWithPrefix:(id)arg1 suffix:(id)arg2;
- (id)_nowString;
- (void)appendAudioData:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startRecording;
- (void)stopRecording;

@end
