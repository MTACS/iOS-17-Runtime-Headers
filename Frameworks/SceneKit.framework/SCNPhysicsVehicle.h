
@interface SCNPhysicsVehicle : SCNPhysicsBehavior {
    SCNPhysicsBody * _chassisBody;
    double  _speedKmHour;
    void * _vehicle;
    NSArray * _wheels;
    SCNPhysicsWorld * _world;
}

@property (nonatomic, readonly) SCNPhysicsBody *chassisBody;
@property (nonatomic, readonly) double speedInKilometersPerHour;
@property (nonatomic, readonly) NSArray *wheels;

+ (bool)supportsSecureCoding;
+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;

- (void)_addToPhysicsWorld:(id)arg1 definition:(struct { unsigned char x1[296]; })arg2;
- (void)_copyDefinition:(struct { unsigned char x1[296]; }*)arg1;
- (void)_createWheel:(id)arg1;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;
- (void)_handleCreateIfNeeded:(bool)arg1;
- (void)_initializeWheelsArray;
- (void)_update;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void*)btVehicle;
- (id)chassisBody;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReferenceToPhysicsBody:(id)arg1;
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)physicsWorld;
- (void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (double)speedInKilometersPerHour;
- (id)valueForKeyPath:(id)arg1;
- (id)wheelAtIndex:(unsigned long long)arg1;
- (id)wheels;

@end
