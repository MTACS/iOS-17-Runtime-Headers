
@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver> {
    PXInboxAggregateDataSourceManager * _dataSourceManager;
}

@property (nonatomic, readonly) PXInboxAggregateDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_updateDataSourceRangesOfCurrentGadgets;
- (void)_updateGadgets;
- (void)_updateLastSeenDateOfCurrentGadgets;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithDataSourceManager:(id)arg1;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
