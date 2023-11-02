
@interface SBVolumeControl : NSObject <PTSettingsKeyObserver, SBElasticHUDViewControllerDelegate, SBElasticVolumeDataSource, SBFZStackParticipantObserver> {
    NSMutableSet * _alwaysHiddenCategories;
    NSSet * _audioCategoriesDisablingVolumeHUD;
    SBAVSystemControllerCache * _avCache;
    NSObject<OS_dispatch_queue> * _avscOperationsQueue;
    SBConferenceManager * _conferenceManager;
    bool  _controlCenterIsPresented;
    bool  _debounce;
    float  _effectiveVolume;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _effectiveVolumeLock;
    SBElasticHUDSettings * _elasticHUDSettings;
    SBHUDController * _hudController;
    NSString * _lastDisplayedCategory;
    NSString * _lastEventCategory;
    unsigned long long  _mode;
    SBRingerControl * _ringerControl;
    SBTelephonyManager * _telephonyManager;
    bool  _volumeDownButtonIsDown;
    bool  _volumeUpButtonIsDown;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastDisplayedCategory;
@property (readonly) Class superclass;

+ (bool)_isVolumeChangeAllowedForState:(id)arg1 error:(out id*)arg2;
+ (bool)_isVolumeManagedForCategory:(id)arg1;

- (void).cxx_destruct;
- (id)_avscOperationsQueue;
- (float)_buttonRepeatDelay;
- (void)_controlCenterWillDismiss:(id)arg1;
- (void)_controlCenterWillPresent:(id)arg1;
- (void)_dispatchAVSystemControllerAsync:(id /* block */)arg1;
- (void)_dispatchAVSystemControllerSync:(id /* block */)arg1;
- (float)_effectiveVolume;
- (void)_effectiveVolumeChanged:(id)arg1;
- (float)_getMediaVolumeForIAP;
- (bool)_isCategoryAlwaysHidden:(id)arg1;
- (bool)_isHUDDisplayableForCategory:(id)arg1 outReason:(id*)arg2;
- (bool)_isHUDDisplayableForLastEventCategoryWithReason:(id*)arg1;
- (bool)_isHUDDisplayableWithReason:(out id*)arg1;
- (bool)_isVolumeHUDVisible;
- (void)_presentVolumeHUDWithVolume:(float)arg1;
- (void)_processZStackParticipantSettings:(id)arg1;
- (void)_resetMediaServerConnection;
- (void)_serverConnectionDied:(id)arg1;
- (void)_setMediaVolumeForIAP:(float)arg1;
- (void)_someSceneWillConnect:(id)arg1;
- (void)_updateEffectiveVolume:(float)arg1;
- (id)acquireVolumeHUDHiddenAssertionForReason:(id)arg1;
- (void)addAlwaysHiddenCategory:(id)arg1;
- (void)cancelVolumeEvent;
- (void)changeVolumeByDelta:(float)arg1;
- (void)clearAlwaysHiddenCategories;
- (void)decreaseVolume;
- (bool)elasticHUDViewControllerCanBePresented:(id)arg1 withReason:(out id*)arg2;
- (void)elasticHUDViewControllerRequestsDismissal:(id)arg1;
- (bool)elasticValueViewController:(id)arg1 updateCurrentValue:(float)arg2;
- (float)elasticValueViewControllerCurrentValue:(id)arg1;
- (id)elasticVolumeViewControllerActiveAudioCategory:(id)arg1;
- (id)existingVolumeHUDViewController;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(bool)arg2;
- (void)hideVolumeHUDIfVisible;
- (void)increaseVolume;
- (id)initWithHUDController:(id)arg1 ringerControl:(id)arg2 telephonyManager:(id)arg3 conferenceManager:(id)arg4;
- (id)lastDisplayedCategory;
- (bool)managesVolumeForCategory:(id)arg1;
- (id)presentedVolumeHUDViewController;
- (void)removeAlwaysHiddenCategory:(id)arg1;
- (void)setActiveCategoryVolume:(float)arg1;
- (void)setVolume:(float)arg1 forCategory:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)toggleMute;
- (float)volumeStepDown;
- (float)volumeStepUp;
- (void)zStackParticipantWithIdentifier:(long long)arg1 settingsDidChange:(id)arg2;
- (void)zStackParticipantWithIdentifier:(long long)arg1 wasAcquiredWithSettings:(id)arg2;

@end
