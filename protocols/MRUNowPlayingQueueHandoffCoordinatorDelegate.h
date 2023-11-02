
@protocol MRUNowPlayingQueueHandoffCoordinatorDelegate <NSObject>

@required

- (void)queueHandoffCoordinator:(MRUNowPlayingQueueHandoffCoordinator *)arg1 didChangeResponse:(MRNowPlayingPlayerResponse *)arg2;
- (void)queueHandoffCoordinator:(MRUNowPlayingQueueHandoffCoordinator *)arg1 didChangeState:(long long)arg2;

@end
