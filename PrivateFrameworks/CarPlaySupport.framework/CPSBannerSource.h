
@interface CPSBannerSource : NSObject <BSInvalidatable, CPBannerProviding, CPSApplicationStateObserving, CPSBannerViewControllerDelegate> {
    bool  _active;
    CPSApplicationStateMonitor * _applicationStateMonitor;
    BNBannerSource * _bannerKitSource;
    NSString * _bundleIdentifier;
    <CPBannerDelegate> * _delegate;
    NSTimer * _dimissTimer;
    NSUUID * _lastUserDismissedIdentifier;
    NSTimer * _lastUserDismissedIdentifierResetTimer;
    CPSBannerViewController * _presentedBannerViewController;
    bool  _rateLimited;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) CPSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, retain) BNBannerSource *bannerKitSource;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPBannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSTimer *dimissTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *lastUserDismissedIdentifier;
@property (nonatomic, retain) NSTimer *lastUserDismissedIdentifierResetTimer;
@property (nonatomic, retain) CPSBannerViewController *presentedBannerViewController;
@property (getter=isRateLimited, nonatomic) bool rateLimited;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissTimerFired:(id)arg1;
- (void)_enqueueBannerItem:(id)arg1;
- (void)_flushQueue;
- (void)_postBannerRequestForBannerItem:(id)arg1;
- (void)_resetDismissTimer;
- (void)_resetLastUserDismissedIdentifierTimer;
- (void)_resetLastUserDismissedIdentifierTimerFired:(id)arg1;
- (void)_revokePresentedBannerWithReason:(id)arg1;
- (void)_setBannerRateLimitEnabled:(bool)arg1 bundleIdentifier:(id)arg2;
- (bool)active;
- (id)applicationStateMonitor;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(bool)arg2;
- (id)bannerKitSource;
- (void)bannerViewController:(id)arg1 requestsDismissalWithReason:(id)arg2;
- (void)bannerViewControllerDidAppearWithIdentifier:(id)arg1;
- (void)bannerViewControllerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerViewControllerTappedWithIdentifier:(id)arg1;
- (id)bundleIdentifier;
- (id)delegate;
- (id)dimissTimer;
- (id)initWithBundleIdentifier:(id)arg1 delegate:(id)arg2 applicationStateMonitor:(id)arg3;
- (void)invalidate;
- (bool)isRateLimited;
- (id)lastUserDismissedIdentifier;
- (id)lastUserDismissedIdentifierResetTimer;
- (void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)postBannerForNavigationAlert:(id)arg1;
- (id)presentedBannerViewController;
- (void)setActive:(bool)arg1;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setBannerKitSource:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimissTimer:(id)arg1;
- (void)setLastUserDismissedIdentifier:(id)arg1;
- (void)setLastUserDismissedIdentifierResetTimer:(id)arg1;
- (void)setPresentedBannerViewController:(id)arg1;
- (void)setRateLimited:(bool)arg1;

@end
