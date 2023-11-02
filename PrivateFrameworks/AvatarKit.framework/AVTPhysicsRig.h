
@interface AVTPhysicsRig : NSObject {
    SCNNode * _chainRoot;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _coneConstraintAnchorB;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _coneConstraintBasis_chainParent;
    float  _coneConstraintLength;
    float  _coneConstraintSinusAngularLimit;
    double  _downForceFactor;
    SCNPhysicsConeTwistJoint * _physicsBehavior;
    SCNPhysicsBody * _physicsBody;
    void _restGravityVector_chainRoot;
    void _restPosition_chainRoot;
    SCNNode * _rig;
}

- (void).cxx_destruct;

@end
