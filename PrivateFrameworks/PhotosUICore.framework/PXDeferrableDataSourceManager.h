
@interface PXDeferrableDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver> {
    bool  _clientIsHandlingDataSourceTransition;
    <PXDeferrableDataSourceManagerDelegate> * _delegate;
    bool  _hasInitialDataSource;
    PXSectionedDataSource * _pendingDataSource;
    NSArray * _pendingDataSourceChangeDetails;
    PXSectionedDataSourceManager * _underlyingDataSourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXDeferrableDataSourceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXSectionedDataSourceManager *underlyingDataSourceManager;

- (void).cxx_destruct;
- (bool)_canAttemptDataSourceChanges;
- (void)_finishTransitionToDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)_internal_setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)_setPendingDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (id)createInitialDataSource;
- (id)delegate;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)resumeDataSourceChanges;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUnderlyingDataSourceManager:(id)arg1;
- (id)underlyingDataSourceManager;

@end
