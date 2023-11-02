
@interface NCCarPlayBannerSource : NSObject <BNBannerSourceDelegate, BNBannerSourceProvidingPrivate, BNPresentableObserving> {
    BNBannerSource * _bannerSource;
    NSTimer * _dismissTimer;
    NSPointerArray * _postedPresentables;
    NSTimer * _replaceTimer;
    <BNBannerSourceDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNBannerSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destination;
@property (getter=_dismissTimer, setter=_setDismissTimer:, nonatomic, retain) NSTimer *dismissTimer;
@property (readonly) unsigned long long hash;
@property (getter=_replaceTimer, setter=_setReplaceTimer:, nonatomic, retain) NSTimer *replaceTimer;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_allPresentablesDidDisappear;
- (id)_bannerSource;
- (void)_cancelDismissTimer;
- (void)_cancelReplaceTimer;
- (id)_dismissTimer;
- (void)_enqueuePostedPresentable:(id)arg1;
- (unsigned long long)_indexOfPostedPresentable:(id)arg1;
- (bool)_isPresentableSticky:(id)arg1;
- (id)_peekPostedPresentable;
- (unsigned long long)_postedPresentableCount;
- (id)_postedPresentablesWithIdentification:(id)arg1;
- (void)_presentableDidDisappear:(id)arg1;
- (void)_presentableWithIdentificationDidDisappear:(id)arg1;
- (id)_pullPostedPresentableAtIndex:(unsigned long long)arg1;
- (id)_replaceTimer;
- (void)_revokePreviouslyPostedPresentableIfPossible;
- (void)_setDismissTimer:(id)arg1;
- (void)_setReplaceTimer:(id)arg1;
- (bool)_setSuspended:(bool)arg1 forReason:(id)arg2 revokingCurrent:(bool)arg3;
- (void)_startAnnounceDismissalTimer;
- (void)_startDismissTimer;
- (void)_startDismissTimerWithTimeInterval:(double)arg1;
- (void)_startReplaceTimer;
- (void)bannerSourceDidInvalidate:(id)arg1;
- (id)delegate;
- (long long)destination;
- (void)didBeginAnnounceForNotificationRequest:(id)arg1;
- (void)didFinishAnnounceForNotificationRequest:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (id)keyWindowForScreen:(id)arg1;
- (id)layoutDescriptionWithError:(out id*)arg1;
- (bool)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requesterIdentifier;
- (id)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3;
- (id)revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(bool)arg3 userInfo:(id)arg4 error:(out id*)arg5;
- (id)revokePresentableWithRequestIdentifier:(id)arg1 reason:(id)arg2 animated:(bool)arg3 userInfo:(id)arg4 error:(out id*)arg5;
- (void)setDelegate:(id)arg1;
- (bool)setSuspended:(bool)arg1 forReason:(id)arg2 revokingCurrent:(bool)arg3 error:(out id*)arg4;

@end
