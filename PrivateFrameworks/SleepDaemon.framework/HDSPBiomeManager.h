
@interface HDSPBiomeManager : NSObject <HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver> {
    <HDSPBiomeInterface> * _biomeInterface;
    HDSPEnvironment * _environment;
}

@property (nonatomic, readonly) <HDSPBiomeInterface> *biomeInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)biomeSleepModeChangeReasonForSleepModeChangeReason:(unsigned long long)arg1;
+ (unsigned long long)biomeSleepModeStateForSleepModeState:(long long)arg1;
+ (id)sleepModePublisher;

- (void).cxx_destruct;
- (bool)_shouldWriteToBiome;
- (void)_writeSleepModeToBiome:(long long)arg1 reason:(unsigned long long)arg2;
- (id)biomeInterface;
- (id)environment;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 biomeInterface:(id)arg2;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (id)subscribe:(id)arg1 callback:(id /* block */)arg2;
- (void)unsubscribe:(id)arg1;

@end
