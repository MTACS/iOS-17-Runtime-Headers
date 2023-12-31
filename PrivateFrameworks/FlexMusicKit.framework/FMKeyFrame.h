
@interface FMKeyFrame : NSObject {
    long long  _sampleTime;
    float  _value;
}

@property (nonatomic) long long sampleTime;
@property (nonatomic) float value;

- (id)description;
- (id)initWithValue:(float)arg1 atTime:(long long)arg2;
- (long long)sampleTime;
- (void)setSampleTime:(long long)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
