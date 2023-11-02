
@interface FCUIFocusEnablementIndicatorBannerManager : FCUIFocusEnablementIndicatorManager <BNPresentableObserving, FCActivityManagerObserving> {
    NSMutableArray * _activeFlankingPresentables;
    <BNPosting> * _bannerPoster;
    NSMapTable * _flankingBannersToDismissTimers;
}

@property (getter=_bannerPoster, nonatomic, readonly) <BNPosting> *bannerPoster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_flankingBannerRequesterIdentifier;
+ (id)managerWithBannerPoster:(id)arg1;

- (void).cxx_destruct;
- (void)_addActivePresentable:(id)arg1;
- (id)_bannerPoster;
- (id)_initWithBannerPoster:(id)arg1;
- (void)_invalidateDismissTimerForPresentable:(id)arg1;
- (void)_removeFlankingPresentable:(id)arg1;
- (void)_scheduleDismissTimerForPresentable:(id)arg1;
- (void)postActivity:(id)arg1 enabled:(bool)arg2;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)revokeWithReason:(id)arg1;
- (bool)shouldKeepPresentingAfterActiveActivityDidChange:(id)arg1 lastActivity:(id)arg2;

@end
