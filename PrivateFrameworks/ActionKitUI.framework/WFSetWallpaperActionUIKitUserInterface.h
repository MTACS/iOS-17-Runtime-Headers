
@interface WFSetWallpaperActionUIKitUserInterface : WFEmbeddableActionUserInterface <PRUIModalRemoteViewControllerDelegate, SBSUIWallpaperPreviewViewControllerDelegate, WFSetWallpaperActionUserInterface> {
    id /* block */  _completionHandler;
    long long  _locations;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long locations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (bool)isiPad;
- (long long)locations;
- (void)modalRemoteViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLocations:(long long)arg1;
- (void)showPreviewForConfiguration:(id)arg1 selectedPoster:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showPreviewWithInput:(id)arg1 key:(id)arg2 wallpaperLocation:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1;
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1;

@end
