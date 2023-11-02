
@interface HKAudioExposureValue : NSObject {
    double  _duration;
    double  _value;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double value;

- (double)duration;
- (id)initWithValue:(double)arg1 duration:(double)arg2;
- (double)value;

@end
