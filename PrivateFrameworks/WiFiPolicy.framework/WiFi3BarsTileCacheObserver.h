
@interface WiFi3BarsTileCacheObserver : NSObject {
    TBDataSourceMediator * _dataSourceMediator;
}

@property (nonatomic, retain) TBDataSourceMediator *dataSourceMediator;

- (void).cxx_destruct;
- (void)_scheduleXPCActivity;
- (void)_submitCacheAvailabilityMetric;
- (id)dataSourceMediator;
- (id)initWithDataSourceMediator:(id)arg1;
- (void)setDataSourceMediator:(id)arg1;

@end
