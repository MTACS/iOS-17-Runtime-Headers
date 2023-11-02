
@interface BLSHDurationCalculator : NSObject {
    double  _duration;
    double  _start;
}

@property (nonatomic, readonly) double remainingDuration;

- (id)initWithDuration:(double)arg1;
- (double)remainingDuration;

@end
