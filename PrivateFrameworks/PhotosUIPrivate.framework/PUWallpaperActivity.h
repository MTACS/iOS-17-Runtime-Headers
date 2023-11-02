
@interface PUWallpaperActivity : PXActivity <PUWallpaperPRUIInlinePosterEditingViewControllerDelegate, SBSUIWallpaperPreviewViewControllerDelegate> {
    bool  __needsUpdateWallpaperModificationAllowed;
    bool  __wallpaperModificationAllowed;
    UIViewController * _wallpaperActivityViewController;
}

@property (setter=_setNeedsUpdateWallpaperModificationAllowed:, nonatomic) bool _needsUpdateWallpaperModificationAllowed;
@property (getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:, nonatomic) bool _wallpaperModificationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_handleSetWallpaperActionWithController:(id)arg1 locations:(long long)arg2;
- (bool)_isWallpaperModificationAllowed;
- (bool)_needsUpdateWallpaperModificationAllowed;
- (void)_restrictionsChanged:(id)arg1;
- (void)_setNeedsUpdateWallpaperModificationAllowed:(bool)arg1;
- (void)_setWallpaperModificationAllowed:(bool)arg1;
- (id)_systemImageName;
- (void)_updateWallpaperModificationAllowedIfNeeded;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)inlineEditingViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1;

@end
