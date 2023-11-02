
@protocol IRServiceContainerDelegate <NSObject>

@required

- (void)serviceContainer:(IRServiceContainer *)arg1 didUpdateContexts:(NSDictionary *)arg2 withReason:(NSString *)arg3;

@end
