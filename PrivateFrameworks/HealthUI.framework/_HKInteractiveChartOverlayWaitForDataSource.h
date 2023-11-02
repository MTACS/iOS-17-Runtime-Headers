
@interface _HKInteractiveChartOverlayWaitForDataSource : NSObject <HKGraphSeriesDataSourceDelegate> {
    HKGraphSeriesDataSource * _dataSource;
    NSMutableArray * _deliveries;
    HKInteractiveChartOverlayViewController * _overlayController;
    _HKInteractiveChartOverlayWaitForCacheData * _parent;
    <HKGraphSeriesDataSourceDelegate> * _previousDelegate;
}

@property (nonatomic, readonly) HKGraphSeriesDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deliveries;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HKInteractiveChartOverlayViewController *overlayController;
@property (nonatomic) _HKInteractiveChartOverlayWaitForCacheData *parent;
@property (nonatomic, retain) <HKGraphSeriesDataSourceDelegate> *previousDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestDataForTimeScope:(long long)arg1 resolution:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 priorityDelegate:(id)arg5;
- (void)addWaitForDataGraphSeriesContext:(id)arg1 timeScope:(long long)arg2 resolution:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 priorityDelegate:(id)arg6 completion:(id /* block */)arg7;
- (id)dataSource;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (id)deliveries;
- (id)initWithOverlayController:(id)arg1 dataSource:(id)arg2 parent:(id)arg3;
- (id)overlayController;
- (id)parent;
- (id)previousDelegate;
- (void)setDeliveries:(id)arg1;
- (void)setOverlayController:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPreviousDelegate:(id)arg1;

@end
