
@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    NSMutableArray * _ALSServices;
    bool  _available;
    bool  _builtIn;
    NSString * _containerID;
    CBABCurve * _curve;
    CBDisplayModule * _displayModule;
    NSString * _displayUUID;
    bool  _enabled;
    bool  _fastRamp;
    bool  _presetDisableAB;
    CBABRamp * _ramp;
    bool  _suspendAutoBrightness;
    NSString * _uniqueID;
    bool  _updatesFrozen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CBDisplayModule *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)dealloc;
- (id)displayModule;
- (void)endFastRamp;
- (bool)getAggregatedLux:(float*)arg1;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;
- (bool)newALSService:(struct __IOHIDServiceClient { }*)arg1;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setPropertyInternal:(id)arg1 forKey:(id)arg2;
- (void)start;
- (void)stop;
- (void)storeCurveToPreferences;
- (void)updateAutoBrightnessState:(bool)arg1;
- (void)updateAvailability;
- (void)updateBrightness;
- (void)updateBrightnessForce:(bool)arg1 periodOverride:(bool)arg2 period:(float)arg3;
- (void)userBrightnessChangingHandler;
- (void)userBrightnessCommitHandler;

@end
