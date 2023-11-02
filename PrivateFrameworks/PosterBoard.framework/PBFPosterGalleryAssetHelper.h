
@interface PBFPosterGalleryAssetHelper : NSObject <BSCancellable, BSInvalidatable, PBFGalleryPosterViewControllerDelegate> {
    <PBFDisplayContext> * _activeDisplayContext;
    PBFPosterGalleryViewSpec * _activeDisplayContextSpec;
    long long  _assetHydrationState;
    <PBFPosterGalleryAssetHelperDelegate> * _delegate;
    <PBFExtensionInstanceProviding> * _extensionInstanceProvider;
    bool  _isInvalidated;
    bool  _isSuspended;
    NSMutableSet * _knownDisplayContexts;
    NSSet * _posterPreviews;
    <PBFPosterPreviewGenerator> * _previewGenerator;
    NSMapTable * _previewToState;
}

@property (nonatomic, retain) <PBFDisplayContext> *activeDisplayContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBFPosterGalleryAssetHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PBFExtensionInstanceProviding> *extensionInstanceProvider;
@property (readonly) unsigned long long hash;
@property (setter=setSuspended:, nonatomic) bool isSuspended;
@property (nonatomic, readonly) NSSet *knownDisplayContexts;
@property (nonatomic, copy) NSSet *posterPreviews;
@property (nonatomic, readonly) <PBFPosterPreviewGenerator> *previewGenerator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentSizeForPreview:(id)arg1;
- (bool)_kickoffPreviewGeneratorForPosterPreview:(id)arg1 context:(id)arg2;
- (id)_newImageViewWithImage:(id)arg1 posterPreview:(id)arg2;
- (void)_receiveUpdatedAssetForPosterPreview:(id)arg1 definition:(id)arg2 displayContext:(id)arg3 image:(id)arg4 fetchError:(id)arg5;
- (void)_resetHydrationState;
- (void)_setupLiveDisplayStyleForPreview:(id)arg1;
- (void)_setupLiveViewControllerForInstance:(id)arg1 preview:(id)arg2;
- (void)_sizeAssetsForActiveDisplayContext;
- (bool)_sizeContainerView:(id)arg1 forPreview:(id)arg2 displayContext:(id)arg3;
- (void)_stateWasUpdated:(bool)arg1;
- (void)_stateWasUpdatedForPosterPreviews:(id)arg1;
- (void)_teardownLiveViewController:(id)arg1 invalidate:(bool)arg2;
- (void)_teardownState:(id)arg1;
- (void)_teardownStateForPosterPreviews:(id)arg1;
- (bool)_updateHydrationStateIfNeeded;
- (bool)_updateHydrationStateTo:(long long)arg1 reason:(id)arg2;
- (id)activeDisplayContext;
- (void)appendDisplayContext:(id)arg1;
- (id)assetsForPosterPreview:(id)arg1;
- (void)cancel;
- (void)cancelPrefetchForPosterPreviews:(id)arg1;
- (id)delegate;
- (id)extensionInstanceProvider;
- (void)galleryPosterViewController:(id)arg1 stateChangedTo:(long long)arg2;
- (id)initWithPreviewGenerator:(id)arg1 extensionInstanceProvider:(id)arg2;
- (void)invalidate;
- (bool)isSuspended;
- (id)knownDisplayContextWithoutActiveDisplayContext;
- (id)knownDisplayContexts;
- (id)posterPreviews;
- (void)prefetchPosterPreviews:(id)arg1;
- (id)previewGenerator;
- (void)resetKnownDisplayContexts;
- (void)setActiveDisplayContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPosterPreviews:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)updatePosterPreview:(id)arg1 isVisible:(bool)arg2;

@end
