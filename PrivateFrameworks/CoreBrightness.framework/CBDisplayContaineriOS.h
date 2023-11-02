
@interface CBDisplayContaineriOS : CBContainer <CBContainerProtocol, CBDisplayModeProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol, NightShiftSupportProtocol> {
    <CBContainerModuleProtocol> * _AODModule;
    <CBContainerModuleProtocol> * _SliderCommitTelemetryModule;
    NSArray * _allowlist;
    bool  _alsServiceReady;
    unsigned int  _armBacklightDisplayService;
    <CBContainerModuleProtocol><CBHIDServiceProtocol> * _autoBrightnessModule;
    <CBBrightnessProxy> * _brtCtl;
    bool  _builtIn;
    NSString * _description;
    CADisplay * _display;
    unsigned int  _displayArrivalIterator;
    struct IONotificationPort { } * _displayArrivalNotificationPort;
    CBCAManager * _displayCAManager;
    NSUUID * _displayContainerUUID;
    <CBContainerModuleProtocol> * _displayControlModule;
    unsigned long long  _displayID;
    unsigned int  _displayRemovalIterator;
    unsigned int  _displayService;
    <CBContainerModuleProtocol><CBHIDServiceProtocol> * _edrControlModule;
    <CBContainerProtocol><CBHIDServiceProtocol><NightShiftSupportProtocol> * _harmonyContainer;
    bool  _isExternal;
    NSMutableArray * _missedKeys;
    NSMutableArray * _missedProperties;
    NSMutableArray * _modules;
    unsigned long long  _registryID;
    NSMutableArray * _relevantServices;
    bool  _running;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)className;
- (id)copyIdentifiers;
- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyInternalForKey:(id)arg1;
- (id)copyStatusInfo;
- (bool)createAndAddSliderCommitTelemetryModule;
- (void)dealloc;
- (id)description;
- (bool)findBacklight;
- (bool)handleCBBrtCtlDisplayContainerStart;
- (bool)handleCBDisplayContainerStart;
- (bool)handleDisplayArrival:(unsigned int)arg1;
- (bool)handleDisplayModeUpdate:(id)arg1;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 from:(id)arg3;
- (void)handlePresetChange:(id)arg1;
- (id)initWithBacklightService:(unsigned int)arg1;
- (id)initWithCADisplay:(id)arg1;
- (id)initWithCBBrtControl:(id)arg1;
- (bool)initialiseHIDDisplay;
- (bool)isReady;
- (bool)matchDisplayWithHidService:(struct __IOHIDServiceClient { }*)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (void)setColorMitigations;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setPropertyNoQueue:(id)arg1 forKey:(id)arg2;
- (void)setupInternalBrtCtlModules;
- (bool)setupInternalModules;
- (bool)start;
- (void)stop;
- (void)tearDownInternalModules;
- (void)unregisterNotificationBlock;

@end
