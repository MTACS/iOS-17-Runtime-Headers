
@protocol BSErrorConfiguring <NSObject>

@required

- (void)setCodeDescription:(NSString *)arg1;
- (void)setFailureDescription:(NSString *)arg1;
- (void)setFailureReason:(NSString *)arg1;
- (void)setUnderlyingError:(NSError *)arg1;
- (void)setUnderlyingErrors:(NSArray *)arg1;
- (void)setUserInfoValue:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;

@end
