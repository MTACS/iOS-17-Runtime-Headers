
@protocol MTTimerTime <NSObject, NSCopying, NSSecureCoding>

@required

- (long long)compare:(id <MTTimerTime>)arg1;
- (bool)isEqualToTime:(id <MTTimerTime>)arg1;
- (double)remainingTime;

@end
