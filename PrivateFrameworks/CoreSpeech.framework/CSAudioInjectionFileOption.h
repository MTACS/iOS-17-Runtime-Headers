
@interface CSAudioInjectionFileOption : NSObject {
    NSURL * _audioURL;
    struct OpaqueExtAudioFile { } * _fFile;
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
    }  _outASBD;
    float  _scaleFactor;
}

@property (nonatomic, readonly) NSURL *audioURL;
@property (nonatomic) struct OpaqueExtAudioFile { }*fFile;
@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } outASBD;
@property (nonatomic, readonly) float scaleFactor;

- (void).cxx_destruct;
- (id)audioURL;
- (id)description;
- (struct OpaqueExtAudioFile { }*)fFile;
- (id)initWithAudioURL:(id)arg1 withScaleFactor:(float)arg2 outASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })outASBD;
- (float)scaleFactor;
- (void)setFFile:(struct OpaqueExtAudioFile { }*)arg1;
- (void)setOutASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;

@end
