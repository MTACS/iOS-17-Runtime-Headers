
@interface GCMotion : NSObject <NSSecureCoding, _GCMotionEventSink> {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _acceleration;
    struct GCQuaternion { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _attitude;
    bool  _compassEnabled;
    GCController * _controller;
    struct { 
        double pitch; 
        double yaw; 
        double roll; 
    }  _eulerAngles;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _gravity;
    bool  _hasAttitude;
    bool  _hasRotationRate;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    id  _motionEventObservation;
    bool  _motionLite;
    struct GCQuaternion { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _prevAttitude;
    struct { 
        double pitch; 
        double yaw; 
        double roll; 
    }  _prevEulerAngles;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rotationRate;
    bool  _sensorsActive;
    float  _tilt;
    float  _tip;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _userAcceleration;
    id /* block */  _valueChangedHandler;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } acceleration;
@property (nonatomic, readonly) struct GCQuaternion { double x1; double x2; double x3; double x4; } attitude;
@property (nonatomic, readonly) GCController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } gravity;
@property (nonatomic, readonly) bool hasAttitude;
@property (nonatomic, readonly) bool hasAttitudeAndRotationRate;
@property (nonatomic, readonly) bool hasGravityAndUserAcceleration;
@property (nonatomic, readonly) bool hasRotationRate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } rotationRate;
@property (nonatomic) bool sensorsActive;
@property (nonatomic, readonly) bool sensorsRequireManualActivation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } userAcceleration;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isUpdatingDeviceMotion;
- (void)_pauseMotionUpdates:(bool)arg1;
- (void)_setAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)_setAttitude:(struct GCQuaternion { double x1; double x2; double x3; double x4; })arg1;
- (void)_setCompassEnabled:(bool)arg1;
- (void)_setGravity:(struct { double x1; double x2; double x3; })arg1;
- (void)_setHasAttitude:(bool)arg1;
- (void)_setHasRotationRate:(bool)arg1;
- (void)_setMotionLite:(bool)arg1;
- (void)_setRotationRate:(struct { double x1; double x2; double x3; })arg1;
- (void)_setUserAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (float)_tilt;
- (float)_tip;
- (struct { double x1; double x2; double x3; })acceleration;
- (struct GCQuaternion { double x1; double x2; double x3; double x4; })attitude;
- (id)controller;
- (void)encodeWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; })gravity;
- (bool)hasAttitude;
- (bool)hasAttitudeAndRotationRate;
- (bool)hasGravityAndUserAcceleration;
- (bool)hasRotationRate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEmulatedMicroGamepad;
- (struct { double x1; double x2; double x3; })rotationRate;
- (bool)sensorsActive;
- (bool)sensorsRequireManualActivation;
- (void)setAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)setAttitude:(struct GCQuaternion { double x1; double x2; double x3; double x4; })arg1;
- (void)setController:(id)arg1;
- (void)setGravity:(struct { double x1; double x2; double x3; })arg1;
- (void)setMotionEventSource:(id)arg1;
- (void)setRotationRate:(struct { double x1; double x2; double x3; })arg1;
- (void)setSensorsActive:(bool)arg1;
- (void)setStateFromMotion:(id)arg1;
- (void)setUserAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (struct { double x1; double x2; double x3; })userAcceleration;
- (id /* block */)valueChangedHandler;

@end
