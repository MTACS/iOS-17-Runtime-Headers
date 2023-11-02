
@interface PXWallpaperTipsHelper_Swift : PXTipsHelper_Swift {
    void failedSettlingEffectTip;
    void hasStartedTips;
    void trySettlingEffectTip;
}

+ (void)dismissTip:(id /* block */)arg1;
+ (void)presentFailedSettlingEffectTip:(id)arg1;
+ (void)presentTrySettlingEffectTip:(id)arg1;
+ (void)removeAllPresentationDelegates;
+ (id)shared;
+ (void)startObservingTips;

- (void).cxx_destruct;
- (id)init;

@end
