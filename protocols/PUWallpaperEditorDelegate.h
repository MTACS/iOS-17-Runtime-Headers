
@protocol PUWallpaperEditorDelegate <NSObject>

@required

- (void)editor:(id <PUWallpaperEditor>)arg1 didInitializeWithEnvironment:(id <PUWallpaperEditorEnvironment>)arg2;
- (void)editor:(id <PUWallpaperEditor>)arg1 didUpdateEnvironment:(id <PUWallpaperEditorEnvironment>)arg2 withTransition:(id <PUWallpaperTransition>)arg3;
- (void)editor:(void *)arg1 finalizeWithCompletion:(void *)arg2; // needs 2 arg types, found 6: <PUWallpaperEditor> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)editor:(id <PUWallpaperEditor>)arg1 populateViews:(id <PUWallpaperEditorLookViewProviding>)arg2 forLook:(id <PUWallpaperEditingLook>)arg3;
- (void)editorDidInvalidate:(id <PUWallpaperEditor>)arg1;
- (NSArray *)looksForEditor:(id <PUWallpaperEditor>)arg1;

@optional

- (void)editor:(id <PUWallpaperEditor>)arg1 depthEffectDisallowedDidChange:(bool)arg2;
- (void)editor:(id <PUWallpaperEditor>)arg1 didTransitionToLook:(id <PUWallpaperEditingLook>)arg2 progress:(double)arg3;
- (double)editor:(id <PUWallpaperEditor>)arg1 luminanceForLook:(id <PUWallpaperEditingLook>)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)editorDidDelayFinalizationForBackgroundTask:(id <PUWallpaperEditor>)arg1;
- (PREditorColorPickerConfiguration *)gradientHomeScreenColorPickerConfigurationForEditor:(id <PUWallpaperEditor>)arg1;
- (NSString *)initialLookIdentifierForEditor:(id <PUWallpaperEditor>)arg1;
- (NSArray *)leadingMenuElementsForEditor:(id <PUWallpaperEditor>)arg1;
- (PREditorColorPickerConfiguration *)solidColorHomeScreenColorPickerConfigurationForEditor:(id <PUWallpaperEditor>)arg1;
- (NSArray *)trailingMenuElementsForEditor:(id <PUWallpaperEditor>)arg1;

@end
