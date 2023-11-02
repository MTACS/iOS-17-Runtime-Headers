
@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver> {
    HDActivityCacheDataSource * _dataSource;
    bool  _deliversUpdates;
    NSDate * _endDate;
    NSDateComponents * _exerciseIntervalComponents;
    NSDateComponents * _moveIntervalComponents;
    _HKDelayedOperation * _resetOperation;
    HDSourceManager * _sourceManager;
    NSDate * _startDate;
    HKStatisticsCollection * _statisticsCollection;
    _HKDelayedOperation * _updateOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_didDeactivate;
- (void)_queue_start;
- (void)_queue_stop;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
