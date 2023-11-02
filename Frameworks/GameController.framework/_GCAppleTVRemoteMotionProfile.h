
@interface _GCAppleTVRemoteMotionProfile : GCMotion {
    struct GCQuaternion { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _attitude;
    bool  _compassEnabled;
    GCController * _controller;
    bool  _emulatedMotionEnabled;
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
    id /* block */  _internalValueChangedHandler;
    bool  _linkedOnOrAfterCompassFeature;
    bool  _motionLite;
    CMMotionManager * _motionMgr;
    bool  _motionUpdatedEnabled;
    bool  _paused;
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
    }  _prevGravity;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rotationRate;
    float  _tilt;
    float  _tip;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _userAcceleration;
    id /* block */  _valueChangedHandler;
}

- (void).cxx_destruct;
- (bool)_isUpdatingDeviceMotion;
- (id /* block */)_motionLiteFusedHandler;
- (void)_pauseMotionUpdates:(bool)arg1;
- (void)_setAttitude:(struct GCQuaternion { double x1; double x2; double x3; double x4; })arg1;
- (void)_setCompassEnabled:(bool)arg1;
- (void)_setGravity:(struct { double x1; double x2; double x3; })arg1;
- (void)_setMotionLite:(bool)arg1;
- (void)_setRotationRate:(struct { double x1; double x2; double x3; })arg1;
- (void)_setUserAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)_startDeviceMotionUpdates;
- (void)_startDeviceMotionUpdatesHelper;
- (void)_stopDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdatesHelper;
- (float)_tilt;
- (float)_tip;
- (struct GCQuaternion { double x1; double x2; double x3; double x4; })attitude;
- (id)controller;
- (struct { double x1; double x2; double x3; })gravity;
- (bool)hasAttitude;
- (bool)hasAttitudeAndRotationRate;
- (bool)hasGravityAndUserAcceleration;
- (bool)hasRotationRate;
- (id)initWithController:(id)arg1;
- (id /* block */)internalValueChangedHandler;
- (bool)isEmulatedMicroGamepad;
- (struct { double x1; double x2; double x3; })rotationRate;
- (void)setInternalValueChangedHandler:(id /* block */)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (struct { double x1; double x2; double x3; })userAcceleration;
- (id /* block */)valueChangedHandler;

@end
