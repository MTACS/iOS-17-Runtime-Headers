
@interface CLFindMyAccessoryAccelerometerSlopeModeConfiguration : NSObject <NSSecureCoding> {
    unsigned char  _sampleCount;
    unsigned char  _sampleRate;
    float  _threshold;
}

@property (nonatomic) unsigned char sampleCount;
@property (nonatomic) unsigned char sampleRate;
@property (nonatomic) float threshold;

+ (unsigned char)maximumSampleCount;
+ (float)maximumThreshold;
+ (unsigned char)minimumSampleCount;
+ (float)minimumThreshold;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreshold:(float)arg1 sampleCount:(unsigned char)arg2 sampleRate:(unsigned char)arg3;
- (unsigned char)sampleCount;
- (unsigned char)sampleRate;
- (void)setSampleCount:(unsigned char)arg1;
- (void)setSampleRate:(unsigned char)arg1;
- (void)setThreshold:(float)arg1;
- (float)threshold;

@end
