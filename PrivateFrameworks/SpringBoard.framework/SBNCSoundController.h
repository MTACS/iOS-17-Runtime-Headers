
@interface SBNCSoundController : NSObject {
    SBLockScreenManager * _lockScreenManager;
    SBLockStateAggregator * _lockStateAggregator;
    NSMutableDictionary * _playingSounds;
    NSMutableSet * _requestsRequiringExplicitKill;
}

@property (nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic, retain) SBLockStateAggregator *lockStateAggregator;
@property (nonatomic, retain) NSMutableDictionary *playingSounds;
@property (nonatomic, retain) NSMutableSet *requestsRequiringExplicitKill;

- (void).cxx_destruct;
- (id)_ambientPresentationController;
- (void)_hardwareButtonPressed:(id)arg1;
- (bool)_isDeviceUILocked;
- (void)_killSounds;
- (void)_lockStateChanged:(id)arg1;
- (bool)_preventVibrations;
- (bool)canPlaySoundForNotificationRequest:(id)arg1;
- (id)init;
- (id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2;
- (id)lockScreenManager;
- (id)lockStateAggregator;
- (void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (id)playingSounds;
- (id)requestsRequiringExplicitKill;
- (void)setLockScreenManager:(id)arg1;
- (void)setLockStateAggregator:(id)arg1;
- (void)setPlayingSounds:(id)arg1;
- (void)setRequestsRequiringExplicitKill:(id)arg1;
- (void)stopSoundForNotificationRequest:(id)arg1;

@end
