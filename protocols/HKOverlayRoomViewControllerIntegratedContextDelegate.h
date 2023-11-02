
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate <NSObject>

@required

- (HKLineSeries *)alternateLineSeries;
- (HKInteractiveChartOverlayNamedDataSource *)cacheDataSource;

@optional

- (HKInteractiveChartDataFormatter *)formatterForTimescope:(long long)arg1;
- (NSString *)unitString:(NSArray *)arg1 applicationItems:(HKOverlayRoomApplicationItems *)arg2 representativeDisplayType:(HKDisplayType *)arg3;
- (NSString *)valueContextString:(NSArray *)arg1 applicationItems:(HKOverlayRoomApplicationItems *)arg2 representativeDisplayType:(HKDisplayType *)arg3;
- (NSString *)valueString:(NSArray *)arg1 applicationItems:(HKOverlayRoomApplicationItems *)arg2 representativeDisplayType:(HKDisplayType *)arg3;

@end
