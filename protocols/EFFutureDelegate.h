
@protocol EFFutureDelegate <NSObject>

@required

- (void)didFinishBlockingMainThreadForFuture:(EFFuture *)arg1;
- (void)didStartBlockingMainThreadForFuture:(EFFuture *)arg1;

@end
