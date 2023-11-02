
@protocol DASessionDelegate <NSObject>

@required

- (void)daSession:(DASession *)arg1 didBecomeActive:(NSError *)arg2;
- (void)daSession:(DASession *)arg1 didEnd:(NSError *)arg2;

@end
