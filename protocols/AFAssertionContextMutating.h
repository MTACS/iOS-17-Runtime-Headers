
@protocol AFAssertionContextMutating <NSObject>

@required

- (void)setEffectiveDate:(NSDate *)arg1;
- (void)setExpirationDuration:(double)arg1;
- (void)setReason:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;

@end
