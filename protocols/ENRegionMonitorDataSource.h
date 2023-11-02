
@protocol ENRegionMonitorDataSource <NSObject>

@required

- (ENRegionVisit *)currentRegionVisit;
- (NSObject<ENRegionMonitorSourceDelegate> *)delegate;
- (void)setDelegate:(NSObject<ENRegionMonitorSourceDelegate> *)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
