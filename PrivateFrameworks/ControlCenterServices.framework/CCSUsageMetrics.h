
@interface CCSUsageMetrics : NSObject

@property (nonatomic, readonly) unsigned long long userInvocationCount;

+ (id)sharedInstance;

- (void)incrementUserInvocationCount;
- (unsigned long long)userInvocationCount;

@end
