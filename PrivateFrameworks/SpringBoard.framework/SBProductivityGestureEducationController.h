
@interface SBProductivityGestureEducationController : NSObject <SBProductivityGestureEducationPillViewControllerDelegate> {
    BSAbsoluteMachTimer * _bannerDismissTimer;
    <BNPosting> * _bannerPoster;
    NSDictionary * _educationItemMap;
    SBProductivityGestureEducationPillViewController * _educationPillViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissBanner:(id)arg1;
- (void)_dismissBannerTimerWithInterval:(double)arg1 reason:(id)arg2;
- (void)_invalidateBannerTimer;
- (void)_itemMapUpdated;
- (long long)_itemTypeForType:(long long)arg1;
- (void)_loadItemMap;
- (void)_presentBannerWithEducationItem:(id)arg1;
- (void)_resetPillViewController:(id)arg1;
- (void)dealloc;
- (void)gestureActivatedForType:(long long)arg1;
- (void)gestureEducationPillViewControllerDidDisappear:(id)arg1;
- (void)gestureEducationPillViewControllerDidReceiveUserTap:(id)arg1;
- (void)gestureEducationPillViewControllerFailsToAppear:(id)arg1;
- (void)gestureEducationPillViewControllerMarqueeStarted:(id)arg1 duration:(double)arg2;
- (void)gestureEducationPillViewControllerWillAppear:(id)arg1;
- (id)initWithBannerPoster:(id)arg1;

@end
