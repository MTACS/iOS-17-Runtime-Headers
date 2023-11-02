
@protocol NWStatsManagerDelegate <NSObject>

@optional

- (void)statsManager:(NWStatsManager *)arg1 didReceiveNWSnapshot:(NWStatsSnapshot *)arg2;
- (void)statsManager:(NWStatsManager *)arg1 thresholdReachedOn:(unsigned int)arg2;

@end
