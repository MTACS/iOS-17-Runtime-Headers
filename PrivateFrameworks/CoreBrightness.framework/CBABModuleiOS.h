
@interface CBABModuleiOS : CBModule <CBAODProtocol, CBContainerModuleProtocol, CBHIDServiceProtocol, CBStatusInfoProtocol> {
    void * _AABC;
    AABRear * _AABRear;
    CBGrimaldiModule * _Grimaldi;
    NSMutableArray * _alsServiceClients;
    CBALSTelemetry * _alsTelemetry;
    CBDisplayModuleiOS * _display;
    NSMutableArray * _otherServiceClients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)copyIdentifiers;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (id)copyPropertyInternalForKey:(id)arg1;
- (void)dealloc;
- (bool)handleAODStateUpdate:(unsigned long long)arg1 transitionTime:(float)arg2 context:(id)arg3;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)shouldMitigateHarmony:(struct __IOHIDServiceClient { }*)arg1;
- (void)start;
- (void)stop;

@end
