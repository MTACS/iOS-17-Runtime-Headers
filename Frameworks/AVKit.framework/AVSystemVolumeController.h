
@interface AVSystemVolumeController : NSObject <AVVolumeController, AVVolumeHUDAssertionDelegate> {
    bool  _changingVolume;
    bool  _currentRouteHasVolumeControl;
    bool  _fullyInitialized;
    NSNumber * _maximumTargetVolumeSinceChangingVolumeBegan;
    bool  _observingSystemController;
    bool  _prefersSystemVolumeHUDHidden;
    AVSystemController * _sharedSystemController;
    NSObject<OS_dispatch_queue> * _systemControllerQueue;
    NSNumber * _targetVolumeInternal;
    NSString * _uniqueIdentifier;
    float  _volume;
    NSString * _volumeCategory;
    bool  _volumeChangesThrottled;
    NSString * _windowSceneSessionIdentifier;
}

@property (getter=isChangingVolume, nonatomic) bool changingVolume;
@property (nonatomic) bool currentRouteHasVolumeControl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullyInitialized, nonatomic) bool fullyInitialized;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan;
@property (nonatomic) bool prefersSystemVolumeHUDHidden;
@property (nonatomic, retain) AVSystemController *sharedSystemController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *targetVolumeInternal;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic) float volume;
@property (nonatomic, readonly) NSString *volumeCategory;
@property (nonatomic) bool volumeChangesThrottled;
@property (nonatomic, readonly) NSString *windowSceneSessionIdentifier;

+ (id)volumeController;
+ (id)windowSceneVolumeHUDAssertions;

- (void).cxx_destruct;
- (void)_applyProposedVolumeIfNeeded;
- (void)_applyProposedVolumeImmediately;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_handleSystemVolumeDidChangeNotification:(id)arg1;
- (void)_observeSystemControllerIfNeeded;
- (void)_performOnMainThread:(id /* block */)arg1;
- (void)_postNotificationForNameIfFullyInitialized:(id)arg1 userInfo:(id)arg2;
- (void)_removeVolumeHUDAssertionsForClientID:(id)arg1;
- (id)_requestSharedSystemController;
- (void)_setupSystemController;
- (void)_unobserveSystemControllerIfNeeded;
- (void)beginChangingVolume;
- (bool)currentRouteHasVolumeControl;
- (id)currentSystemController;
- (void)dealloc;
- (void)endChangingVolume;
- (id)init;
- (bool)isChangingVolume;
- (bool)isFullyInitialized;
- (id)maximumTargetVolumeSinceChangingVolumeBegan;
- (bool)prefersSystemVolumeHUDHidden;
- (void)setChangingVolume:(bool)arg1;
- (void)setClientWithIdentifier:(id)arg1 forWindowSceneSessionWithIdentifier:(id)arg2;
- (void)setCurrentRouteHasVolumeControl:(bool)arg1;
- (void)setFullyInitialized:(bool)arg1;
- (void)setMaximumTargetVolumeSinceChangingVolumeBegan:(id)arg1;
- (void)setPrefersSystemVolumeHUDHidden:(bool)arg1;
- (void)setSharedSystemController:(id)arg1;
- (void)setSystemVolumeHUDEnabled:(bool)arg1 forSceneVolumeHudAssertion:(id)arg2;
- (void)setSystemVolumeHUDEnabled:(bool)arg1 forWindowSceneSessionIdentifier:(id)arg2;
- (void)setTargetVolume:(float)arg1;
- (void)setTargetVolumeInternal:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 shouldShowHUD:(bool)arg2;
- (void)setVolumeChangesThrottled:(bool)arg1;
- (id)sharedSystemController;
- (id)targetVolumeInternal;
- (id)uniqueIdentifier;
- (float)volume;
- (id)volumeCategory;
- (bool)volumeChangesThrottled;
- (id)windowSceneSessionIdentifier;

@end
