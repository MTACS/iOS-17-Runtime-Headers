
@protocol _CDRateLimiting <NSObject>

@required

- (bool)credit;
- (bool)debited;

@end
