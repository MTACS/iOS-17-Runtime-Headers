
@interface SBMutableHardwareButtonGestureParameters : SBHardwareButtonGestureParameters {
    double  _longPressTimeInterval;
    long long  _maximumPressCount;
    double  _multiplePressTimeInterval;
}

@property (nonatomic) double longPressTimeInterval;
@property (nonatomic) long long maximumPressCount;
@property (nonatomic) double multiplePressTimeInterval;

- (double)longPressTimeInterval;
- (long long)maximumPressCount;
- (double)multiplePressTimeInterval;
- (void)setLongPressTimeInterval:(double)arg1;
- (void)setMaximumPressCount:(long long)arg1;
- (void)setMultiplePressTimeInterval:(double)arg1;

@end
