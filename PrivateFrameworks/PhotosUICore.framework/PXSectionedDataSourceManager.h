
@interface PXSectionedDataSourceManager : PXObservable <PXMutableSectionedDataSourceManager> {
    PXSectionedChangeDetailsRepository * _changeHistory;
    PXSectionedDataSource * _dataSource;
    NSMutableArray * _waitingConditions;
}

@property (nonatomic, readonly) PXSectionedChangeDetailsRepository *changeHistory;
@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXSectionedDataSource *dataSourceIfExists;

- (void).cxx_destruct;
- (void)_reevaluateWaitingConditions;
- (void)_setDataSource:(id)arg1;
- (void)_waitingConditionDidTimeout:(id)arg1;
- (id)allChangeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (id)changeHistory;
- (id)createInitialDataSource;
- (id)dataSource;
- (id)dataSourceIfExists;
- (void)didCreateInitialDataSource;
- (void)didPublishChanges;
- (id)init;
- (id)mutableChangeObject;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (id)queryObserversInterestingObjectReferences;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (void)waitForCondition:(id /* block */)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;

@end
