
@protocol PUWallpaperEditor <NSObject>

@required

- (UIView *)contentOverlayView;
- (void)dismissViewControllerAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isPerspectiveZoomEnabled;
- (void)presentColorPickerWithConfiguration:(void *)arg1 changeHandler:(void *)arg2; // needs 2 arg types, found 7: PREditorColorPickerConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIColor *, void*
- (void)presentViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id)pu_beginBackgroundTaskForReason:(NSString *)arg1;
- (bool)pu_canApplyParallaxToViews;
- (<PUWallpaperEditingLook> *)pu_currentLook;
- (void)pu_endBackgroundTask:(id)arg1 completionStatus:(long long)arg2;
- (bool)pu_isDepthEffectDisallowed;
- (void)pu_requestDismissalWithAction:(long long)arg1;
- (void)pu_updateLookProperties;
- (void)pu_updateLooks;
- (void)pu_updateLuminanceValuesForLooks;
- (void)pu_updatePreferences:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PUMutableWallpaperEditorPreferences> *, <PUWallpaperTransition> *, void*
- (void)setPerspectiveZoomEnabled:(bool)arg1;
- (void)updateActions;

@optional

- (UIAction *)placeholderAction;
- (UIView *)viewForMenuElementIdentifier:(NSString *)arg1;

@end
