
@interface PXWallpaperTipsHelper : PXTipsHelper

+ (void)dismissTip:(id /* block */)arg1;
+ (void)presentFailedSettlingEffectTip:(id)arg1;
+ (void)presentTrySettlingEffectTip:(id)arg1;
+ (void)removeAllPresentationDelegates;
+ (void)startObservingTips;

@end
