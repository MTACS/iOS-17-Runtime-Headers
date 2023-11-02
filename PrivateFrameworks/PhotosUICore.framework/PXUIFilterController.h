
@interface PXUIFilterController : UITableViewController <PXChangeObserver, PXFilterController, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _contentFilterGroups;
    PXContentFilterState * _contentFilterState;
    PXAssetsDataSourceCountsController * _countsController;
    PXAssetsDataSourceManager * _dataSourceManager;
    <PXFilterControllerDelegate> * _filterControllerDelegate;
    PXLibraryFilterState * _libraryFilterState;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
}

@property (nonatomic, copy) PXContentFilterState *contentFilterState;
@property (nonatomic, retain) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXFilterControllerDelegate> *filterControllerDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) Class superclass;

+ (bool)_isContentFilterItemTagHandledBySwitch:(long long)arg1;

- (void).cxx_destruct;
- (id)_contentFilterGroups;
- (long long)_contentFilterGroupsCount;
- (void)_doneButtonPressed:(id)arg1;
- (void)_filterControllerDidClose;
- (id)_localizedCounts;
- (id)_localizedGuestCounts;
- (id)_sectionHeaderTitleTextAttributes;
- (void)_setVisibilityForSender:(id)arg1;
- (void)_setupNavigationBar;
- (void)_setupTableView;
- (void)_tappedRowAtIndexPath:(id)arg1;
- (void)_updateContentFilterStateWithFilterItemTag:(long long)arg1 shouldEnable:(bool)arg2;
- (void)_updateFooterLayout;
- (void)_updateFooterStatus;
- (void)_updateTableView;
- (id)contentFilterState;
- (id)dataSourceManager;
- (id)filterControllerDelegate;
- (id)initWithDelegate:(id)arg1 libraryFilterState:(id)arg2 initialContentFilterState:(id)arg3 isSyndicationLibraryAlbum:(bool)arg4 sharedLibraryStatusProvider:(id)arg5;
- (id)libraryFilterState;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setContentFilterState:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (id)sharedLibraryStatusProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
