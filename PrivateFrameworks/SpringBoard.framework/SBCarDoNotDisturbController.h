
@interface SBCarDoNotDisturbController : NSObject <CSExternalBehaviorProviding, CSExternalEventHandling, CSExternalLockProviding> {
    CARAutomaticDNDStatus * _carAutomaticDNDStatus;
    SBLockScreenManager * _lockScreenManager;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_exitConfirmationRequired;
    bool  _queue_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
    bool  _queue_pendingExitConfirmationRequirement;
    bool  _queue_screenOn;
    bool  _queue_stateValid;
}

@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) bool showPasscode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_dismissAlertItemsAnimated:(bool)arg1;
- (bool)_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
- (bool)_isExitConfirmationRequired;
- (void)_queue_setExitConfirmationRequired:(bool)arg1;
- (void)_queue_setScreenOn:(bool)arg1;
- (void)_setHasShownSiriHeaderViewControllerDuringCurrentCarDNDSession:(bool)arg1;
- (void)_setScreenOn:(bool)arg1;
- (bool)_shouldExitConfirmationBeEnforced;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSEventHandling;
- (void)conformsToCSExternalBehaviorProviding;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (id)initWithCARAutomaticDNDStatus:(id)arg1 lockScreenManager:(id)arg2;
- (bool)isLocked;
- (long long)notificationBehavior;
- (long long)participantState;
- (long long)proximityDetectionMode;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;
- (bool)showPasscode;
- (bool)unlockFromSource:(int)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
