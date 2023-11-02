
@interface DockKitCore.Actuator : DockKitCore.Component {
    void _currentAcceleration;
    void _currentPosition;
    void _currentVelocity;
    void _homePosition;
    void _softMaxPosition;
    void _softMaxSpeed;
    void _softMinPosition;
    void actuatorType;
    void allocatedLock;
    void cameraLimits;
    void controlParams;
    void initialized;
    void maxAcceleration;
    void maxPosition;
    void maxSpeed;
    void minPosition;
    void targetAcceleration;
    void targetPosition;
    void targetVelocity;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 name:(id)arg2 type:(long long)arg3;
- (id)initWithId:(long long)arg1 type:(long long)arg2 name:(id)arg3 minPosition:(double)arg4 maxPosition:(double)arg5 maxSpeed:(double)arg6 maxAcceleration:(double)arg7 homePosition:(double)arg8 controlParams:(id)arg9 cameraLimits:(id)arg10;

@end
