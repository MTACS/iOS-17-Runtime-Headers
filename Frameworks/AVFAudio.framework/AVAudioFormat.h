
@interface AVAudioFormat : NSObject <NSSecureCoding> {
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
    unsigned long long  _commonFormat;
    AVAudioChannelLayout * _layout;
    void * _reserved;
}

@property (nonatomic, readonly) unsigned int channelCount;
@property (nonatomic, readonly) AVAudioChannelLayout *channelLayout;
@property (nonatomic, readonly) unsigned long long commonFormat;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (getter=isInterleaved, nonatomic, readonly) bool interleaved;
@property (nonatomic, retain) NSData *magicCookie;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) NSDictionary *settings;
@property (getter=isStandard, nonatomic, readonly) bool standard;
@property (nonatomic, readonly) const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*streamDescription;

+ (id)formatWithInvalidSampleRateAndChannelCount;
+ (id)settingsFromASBD:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;
+ (bool)supportsSecureCoding;

- (unsigned int)channelCount;
- (id)channelLayout;
- (unsigned long long)commonFormat;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)hash;
- (id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2;
- (id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (id)initWithCMAudioFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned int)arg3 interleaved:(bool)arg4;
- (id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(bool)arg3 channelLayout:(id)arg4;
- (id)initWithSettings:(id)arg1;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (id)initWithStreamDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 channelLayout:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isInterleaved;
- (bool)isStandard;
- (id)magicCookie;
- (double)sampleRate;
- (void)setMagicCookie:(id)arg1;
- (id)settings;
- (const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)streamDescription;

@end
