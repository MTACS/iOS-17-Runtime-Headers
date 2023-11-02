
@interface _HKInteractiveChartOverlayDeliverCachedData : NSObject {
    id /* block */  _completion;
    HKGraphSeriesDataSource * _dataSource;
    NSDate * _endDate;
    id  _graphSeriesContext;
    HKInteractiveChartOverlayViewController * _overlayController;
    long long  _resolution;
    NSDate * _startDate;
    long long  _timeScope;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) HKGraphSeriesDataSource *dataSource;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) id graphSeriesContext;
@property (nonatomic) HKInteractiveChartOverlayViewController *overlayController;
@property (nonatomic, readonly) long long resolution;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long timeScope;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)dataSource;
- (bool)deliverDataToCompletion;
- (id)endDate;
- (id)graphSeriesContext;
- (id)initWithOverlayController:(id)arg1 dataSource:(id)arg2 graphSeriesContext:(id)arg3 timeScope:(long long)arg4 resolution:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 completion:(id /* block */)arg8;
- (id)overlayController;
- (long long)resolution;
- (void)setCompletion:(id /* block */)arg1;
- (void)setOverlayController:(id)arg1;
- (id)startDate;
- (long long)timeScope;

@end
