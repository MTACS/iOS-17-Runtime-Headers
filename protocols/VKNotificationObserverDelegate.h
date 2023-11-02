
@protocol VKNotificationObserverDelegate <NSObject>

@optional

- (void)didReceiveFlushTileCaches;
- (void)didReceiveLocalChanged;
- (void)didReceiveMemoryWarning;
- (void)didReceivePowerStateChanged;
- (void)didReceiveThermalStateChanged;

@end
