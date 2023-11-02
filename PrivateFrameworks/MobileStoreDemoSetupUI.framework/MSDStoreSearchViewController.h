
@interface MSDStoreSearchViewController : UIViewController <MSDMapViewControllerDelegate, MSDSearchResultViewControllerDelegate, UISheetPresentationControllerDelegate> {
    UISheetPresentationControllerDetent * _customDetent;
    NSString * _customDetentIdentifier;
    MSDKManagedDevice * _device;
    MSDMapViewController * _mapViewController;
    MSDSearchResultViewController * _searchResultViewController;
    MSDStoreInfo * _selectedStore;
    UINavigationController * _sheetContentViewController;
    NSObject<OS_dispatch_queue> * _updateQueue;
    CLLocation * _userLocation;
}

@property (nonatomic, retain) UISheetPresentationControllerDetent *customDetent;
@property (nonatomic, retain) NSString *customDetentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MSDKManagedDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MSDMapViewController *mapViewController;
@property (nonatomic, retain) MSDSearchResultViewController *searchResultViewController;
@property (nonatomic, retain) MSDStoreInfo *selectedStore;
@property (nonatomic, retain) UINavigationController *sheetContentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;
@property (nonatomic, retain) CLLocation *userLocation;

- (void).cxx_destruct;
- (void)_help:(id)arg1;
- (void)_lockSheetDetent;
- (id)_searchStoreWithText:(id)arg1;
- (void)_showSheet;
- (void)_unlockSheetDetent;
- (void)_updateViewWithSearchText:(id)arg1;
- (id)customDetent;
- (id)customDetentIdentifier;
- (id)device;
- (void)didAssignStore:(id)arg1 forViewController:(id)arg2;
- (void)didDeselectStore:(id)arg1 forViewController:(id)arg2;
- (void)didDeselectStores:(id)arg1 forViewController:(id)arg2;
- (void)didDismissStoreListView:(id)arg1 forViewController:(id)arg2;
- (void)didEnterSearchText:(id)arg1 forViewController:(id)arg2;
- (void)didSelectNoStoreForViewController:(id)arg1;
- (void)didSelectStore:(id)arg1 forViewController:(id)arg2;
- (void)didSelectStores:(id)arg1 forViewController:(id)arg2;
- (id)init;
- (id)mapViewController;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (id)searchResultViewController;
- (id)selectedStore;
- (void)setCustomDetent:(id)arg1;
- (void)setCustomDetentIdentifier:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setMapViewController:(id)arg1;
- (void)setSearchResultViewController:(id)arg1;
- (void)setSelectedStore:(id)arg1;
- (void)setSheetContentViewController:(id)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (id)sheetContentViewController;
- (id)updateQueue;
- (id)userLocation;
- (void)userLocationDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
