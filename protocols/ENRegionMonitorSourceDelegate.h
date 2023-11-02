
@protocol ENRegionMonitorSourceDelegate <NSObject>

@required

- (void)regionDataSource:(NSObject<ENRegionMonitorDataSource> *)arg1 updatedWithVisit:(ENRegionVisit *)arg2;

@end
