
@interface GKAgent : GKComponent <NSSecureCoding> {
    GKBehavior * _behavior;
    <GKAgentDelegate> * _delegate;
    struct GKSimpleVehicle { 
        int (**_vptr$AbstractLocalSpace)(); 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _side; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _up; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _forward; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _position; 
        float WanderSide; 
        float WanderUp; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } hisPositionAtNearestApproach; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } ourPositionAtNearestApproach; 
        bool gaudyPursuitAnnotation; 
        int serialNumber; 
        float _mass; 
        float _radius; 
        float _speed; 
        float _maxForce; 
        float _maxSpeed; 
        float _curvature; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _lastForward; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _lastPosition; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _smoothedPosition; 
        float _smoothedCurvature; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } _smoothedAcceleration; 
        bool m_rightHanded; 
    }  _vehicle;
}

@property (nonatomic, retain) GKBehavior *behavior;
@property (nonatomic) <GKAgentDelegate> *delegate;
@property (nonatomic) float mass;
@property (nonatomic) float maxAcceleration;
@property (nonatomic) float maxSpeed;
@property (nonatomic) float radius;
@property (nonatomic) float speed;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)behavior;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)mass;
- (float)maxAcceleration;
- (float)maxSpeed;
- (void)position3;
- (float)radius;
- (void)setBehavior:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMass:(float)arg1;
- (void)setMaxAcceleration:(float)arg1;
- (void)setMaxSpeed:(float)arg1;
- (void)setRadius:(float)arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (void)steerForAlignment:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (void)steerForCohesion:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (void)steerForFlee;
- (void)steerForIntercept:(id)arg1 maxPredictionTime:(double)arg2;
- (void)steerForSeek;
- (void)steerForSeparation:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3;
- (void)steerForTargetSpeed:(float)arg1;
- (void)steerForWander:(double)arg1 speed:(float)arg2;
- (void)steerToAvoidAgents:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;
- (void)steerToAvoidObstacles:(id)arg1 timeBeforeCollisionToAvoid:(double)arg2;
- (void)steerToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(bool)arg3;
- (void)steerToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2;
- (void*)vehicle;
- (void)velocity3;

@end
