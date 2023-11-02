
@protocol SBMedusaDecoratedDeviceApplicationSceneViewControlling <SBDeviceApplicationSceneViewControlling, SBLayoutStateTransitionObserver, SBSceneLayoutMedusaStatusBarAssertionProviding>

@required

- (double)blurViewIconScale;
- (bool)isBlurred;
- (bool)isNubViewHidden;
- (bool)isNubViewHighlighted;
- (void)setBlurViewIconScale:(double)arg1;
- (void)setLiveContentBlurEnabled:(void *)arg1 duration:(void *)arg2 blurDelay:(void *)arg3 iconViewScale:(void *)arg4 began:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 14: bool, double, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)setNubViewHidden:(bool)arg1;
- (void)setNubViewHighlighted:(bool)arg1;

@end
