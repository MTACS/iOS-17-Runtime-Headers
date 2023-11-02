
@protocol DAReachabilityClient <NSObject>

@required

- (void)networkReachable;

@optional

- (NSString *)hostToObserveForDAReachability:(DAReachability *)arg1;

@end
