
@protocol PUWallpaperRenderer <NSObject>

@required

- (UIView *)backgroundView;
- (UIView *)floatingView;
- (UIView *)foregroundView;
- (<PUInvalidatable> *)pu_extendRenderSessionForReason:(NSString *)arg1;
- (void)pu_noteContentSignificantlyChanged;
- (void)pu_updatePreferences:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PUWallpaperMutablePreferences> *, <PUWallpaperTransition> *, void*

@optional

- (double)pu_backlightTransformAnimationDuration;
- (double)pu_lowLuminanceAlphaAnimationDuration;
- (double)pu_shuffleSleepFadeInAnimationDuration;
- (double)pu_shuffleSleepFadeOutAnimationDuration;
- (double)pu_shuffleSleepTransformOutAnimationDuration;

@end
