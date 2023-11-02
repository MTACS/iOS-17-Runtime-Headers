
@interface PXCuratedLibraryGuestAssetTracker : NSObject <PXChangeObserver> {
    bool  _canDisplayGuestAssets;
    <PXCuratedLibraryGuestAssetTrackerDelegate> * _delegate;
    bool  _isActive;
    bool  _isDisplayingGuestAssets;
    PXCuratedLibraryLayout * _layout;
    unsigned long long  _numberOfGuestAssetsVisible;
    PXCuratedLibraryViewModel * _viewModel;
}

@property (nonatomic, readonly) bool canDisplayGuestAssets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCuratedLibraryGuestAssetTrackerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActive;
@property (nonatomic, readonly) bool isDisplayingGuestAssets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_checkForGuestAssetsVisible;
- (void)_checkForVisibilityUpdates;
- (bool)_isViewSettled;
- (bool)canDisplayGuestAssets;
- (id)delegate;
- (id)initWithViewModel:(id)arg1 layout:(id)arg2;
- (bool)isActive;
- (bool)isDisplayingGuestAssets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCanDisplayGuestAssets:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsDisplayingGuestAssets:(bool)arg1;

@end
