
@interface DockKitCore.DockCoreAccessory : NSObject <DockKitCore.XPCActuatorClientProtocol, DockKitCore.XPCSensorClientProtocol, NSSecureCoding> {
    void XPCTIMEOUT;
    void _xpcAllowed;
    void _xpcConnection;
    void _xpcConnectionError;
    void _xpcConnectionLock;
    void certified;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  created;
    void feedbackDelegates;
    void firmwareVersion;
    void info;
    void isMagSafe;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void model;
    void sensorDelegates;
    void systems;
    void trajectoryProgressDelegate;
    void version;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, retain) _TtC11DockKitCore12DockCoreInfo *info;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, copy) NSArray *systems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)actuatorFeedbackWithInfo:(id)arg1 system:(id)arg2 actuators:(id)arg3 positions:(id)arg4 velocities:(id)arg5 timestamp:(double)arg6;
- (void)dealloc;
- (id)description;
- (void)disconnectWithAllowReconnect:(bool)arg1;
- (void)disconnectedWithErr:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)getActuatorIndexWithName:(id)arg1 system:(id)arg2;
- (id)getActuatorWithName:(id)arg1;
- (id)getSystemSensorsWithName:(id)arg1 sensors:(id)arg2;
- (bool)hasSystemActuatorsWithName:(id)arg1 actuators:(id)arg2;
- (bool)hasSystemSensorsWithName:(id)arg1 sensors:(id)arg2;
- (bool)hasSystemWithName:(id)arg1 kind:(Class)arg2;
- (long long)hash;
- (id)info;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 systems:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)sensorDataWithInfo:(id)arg1 system:(id)arg2 sensors:(id)arg3 data:(id)arg4;
- (void)setInfo:(id)arg1;
- (void)setSystems:(id)arg1;
- (id)summary;
- (id)systems;
- (void)trajectoryProgressFeedbackWithInfo:(id)arg1 system:(id)arg2 progress:(id)arg3;

@end
