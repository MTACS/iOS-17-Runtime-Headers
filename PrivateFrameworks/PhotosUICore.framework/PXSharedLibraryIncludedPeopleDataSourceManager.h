
@interface PXSharedLibraryIncludedPeopleDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver> {
    NSMutableArray * _infos;
    NSMutableArray * _infosWithBothPeopleAndParticipants;
    NSMutableArray * _infosWithoutPeople;
    NSMutableSet * _removedParticipants;
    PXSharedLibraryAssistantViewModel * _viewModel;
    bool  _viewModelSyncingDisabled;
}

@property (nonatomic, readonly) PXSharedLibraryIncludedPeopleDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;
@property (nonatomic) bool viewModelSyncingDisabled;

- (void).cxx_destruct;
- (id)_infosForPersonIdentifiers:(id)arg1;
- (void)_resetIfNeeded;
- (void)_updateDataSource;
- (void)_updateDataSourceWithItemChanges:(id)arg1 fromDataSourceIdentifier:(long long)arg2;
- (void)_updateViewModel;
- (void)_updateViewModelInitially;
- (void)addInfos:(id)arg1;
- (void)addSelectedPersonIdentifiers:(id)arg1;
- (id)createInitialDataSource;
- (void)didCreateInitialDataSource;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (void)removeAllItems;
- (void)removeInfo:(id)arg1;
- (void)replaceInfo:(id)arg1 withInfo:(id)arg2;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)setViewModelSyncingDisabled:(bool)arg1;
- (id)viewModel;
- (bool)viewModelSyncingDisabled;

@end
