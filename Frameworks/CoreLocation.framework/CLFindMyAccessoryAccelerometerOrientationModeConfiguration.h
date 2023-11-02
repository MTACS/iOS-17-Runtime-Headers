
@interface CLFindMyAccessoryAccelerometerOrientationModeConfiguration : NSObject <NSSecureCoding> {
    unsigned short  _sleepDuration_ms;
    unsigned int  _threshold;
}

@property (nonatomic) unsigned short sleepDuration_ms;
@property (nonatomic) unsigned int threshold;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreshold:(unsigned int)arg1 sleepDuration:(unsigned short)arg2;
- (void)setSleepDuration_ms:(unsigned short)arg1;
- (void)setThreshold:(unsigned int)arg1;
- (unsigned short)sleepDuration_ms;
- (unsigned int)threshold;

@end
