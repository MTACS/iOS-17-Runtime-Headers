
@protocol NWStatisticsSourceDelegate <NSObject>

@optional

- (void)sourceDidReceiveCounts:(NWStatisticsSource *)arg1;
- (void)sourceDidReceiveDescription:(NWStatisticsSource *)arg1;

@end
