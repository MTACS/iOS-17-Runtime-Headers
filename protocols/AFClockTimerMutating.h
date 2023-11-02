
@protocol AFClockTimerMutating <NSObject>

@required

- (void)setDismissedDate:(NSDate *)arg1;
- (void)setDuration:(double)arg1;
- (void)setFireDate:(NSDate *)arg1;
- (void)setFireTimeInterval:(double)arg1;
- (void)setFiredDate:(NSDate *)arg1;
- (void)setIsFiring:(bool)arg1;
- (void)setLastModifiedDate:(NSDate *)arg1;
- (void)setState:(long long)arg1;
- (void)setTimerID:(NSUUID *)arg1;
- (void)setTimerURL:(NSURL *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(long long)arg1;

@end
