
@interface VTAudioFileLog : NSObject {
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
- (void)_closeAudioFile;
- (void)appendAudioData:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;
- (void)dealloc;
- (id)init;
- (void)startRecording;
- (void)stopRecording;

@end
