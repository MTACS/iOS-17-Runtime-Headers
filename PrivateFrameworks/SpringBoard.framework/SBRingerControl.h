
@interface SBRingerControl : NSObject <SBAVSystemControllerCacheObserver, SBControlCenterObserver, SBRingerAlertElementDelegate, SBRingerHUDViewControllerDelegate> {
    SBAVSystemControllerCache * _avCache;
    NSObject<OS_dispatch_queue> * _avscOperationsQueue;
    SBBannerManager * _bannerManager;
    SBSystemActionCompoundPreviewAssertion * _compoundPreviewAssertion;
    SBControlCenterController * _controlCenterController;
    SBRingerAlertElement * _ringerAlertElement;
    SBRingerHUDViewController * _ringerHUDViewController;
    bool  _ringerMuted;
    SBSoundController * _soundController;
    float  _volume;
}

@property (nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_accessibilityIsRingerMuted;
- (void)cache:(id)arg1 didUpdateRingerMuted:(bool)arg2;
- (void)completeSetupWithRingerMuted:(bool)arg1;
- (id)controlCenterController;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (id)observeRingerMutedWithBlock:(id /* block */)arg1;
- (id)previewRingerStateForReason:(id)arg1;
- (void)ringerAlertElementWantsToBeDismissed:(id)arg1 forReason:(id)arg2;
- (void)ringerAlertElementWantsToBePresented:(id)arg1;
- (void)ringerAlertElementWantsToResetAutomaticInvalidationTimer:(id)arg1;
- (void)ringerHUDViewControllerWantsToBeDismissed:(id)arg1;
- (void)ringerHUDViewControllerWantsToBePresented:(id)arg1;
- (void)setControlCenterController:(id)arg1;
- (void)setRingerMuted:(bool)arg1 withFeedback:(bool)arg2 reason:(id)arg3 clientType:(unsigned int)arg4;
- (id)soundForRingerMuted:(bool)arg1;

@end
