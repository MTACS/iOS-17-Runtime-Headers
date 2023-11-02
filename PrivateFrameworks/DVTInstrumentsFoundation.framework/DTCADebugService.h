
@interface DTCADebugService : DTGraphicsService {
    NSMutableDictionary * _enabledSwitches;
}

@property (nonatomic, retain) NSMutableDictionary *enabledSwitches;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (void)_collectData;
- (bool)_switchNamed:(id)arg1 toDebugOption:(unsigned int*)arg2;
- (id)availableStatistics;
- (void)cleanup;
- (void)cleanupSwitches;
- (void)dealloc;
- (id)driverNames;
- (id)enabledSwitches;
- (id)initWithChannel:(id)arg1;
- (void)setEnabledSwitches:(id)arg1;
- (void)setValue:(id)arg1 forSwitchName:(id)arg2;
- (id)valueForSwitch:(id)arg1;

@end
