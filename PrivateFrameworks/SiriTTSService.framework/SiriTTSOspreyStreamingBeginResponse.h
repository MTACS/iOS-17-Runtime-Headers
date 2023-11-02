
@interface SiriTTSOspreyStreamingBeginResponse : NSObject {
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
    double  _bufferDuration;
    NSString * _resourceLanguage;
    long long  _resourceVersion;
    NSString * _voiceFootprint;
    NSString * _voiceGender;
    NSString * _voiceLanguage;
    NSString * _voiceName;
    NSString * _voiceType;
    long long  _voiceVersion;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, readonly) double bufferDuration;
@property (nonatomic, readonly) NSString *resourceLanguage;
@property (nonatomic, readonly) long long resourceVersion;
@property (nonatomic, readonly) NSString *voiceFootprint;
@property (nonatomic, readonly) NSString *voiceGender;
@property (nonatomic, readonly) NSString *voiceLanguage;
@property (nonatomic, readonly) NSString *voiceName;
@property (nonatomic, readonly) NSString *voiceType;
@property (nonatomic, readonly) long long voiceVersion;

- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (double)bufferDuration;
- (id)initWithOspreyBeginResponse:(id)arg1;
- (id)resourceLanguage;
- (long long)resourceVersion;
- (id)voiceFootprint;
- (id)voiceGender;
- (id)voiceLanguage;
- (id)voiceName;
- (id)voiceType;
- (long long)voiceVersion;

@end
