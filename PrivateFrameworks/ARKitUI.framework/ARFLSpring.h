
@interface ARFLSpring : NSObject {
    double  _maximumTarget;
    double  _minimumTarget;
    struct ARFLSpringParameters { 
        double dampingRatio; 
        double dampingRatioSmoothing; 
        double response; 
        double responseSmoothing; 
    }  _parameters;
    double  _previousTarget;
    double  _projectionDeceleration;
    double  _retargetResponseFraction;
    double  _rubberbandFactor;
    double  _rubberbandRange;
    struct ARFLCompoundSpring { 
        struct ARFLSimpleSpringState { 
            double position; 
            double velocity; 
        } state; 
        struct ARFLSimpleSpring { 
            struct ARFLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } stiffness; 
        struct ARFLSimpleSpring { 
            struct ARFLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } damping; 
        struct ARFLSimpleSpring { 
            struct ARFLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } dampingRatio; 
        struct ARFLSimpleSpring { 
            struct ARFLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } response; 
        struct ARFLSimpleSpring { 
            struct ARFLSimpleSpringState { 
                double position; 
                double velocity; 
            } state; 
            double mass; 
            double stiffness; 
            double damping; 
            double anchor; 
            double stablePositionThreshold; 
            double stableVelocityThreshold; 
        } anchor; 
        bool usesDampingRatioResponse; 
    }  _s;
    double  _targetVelocity;
    bool  _tracking;
    struct ARFLSpringParameters { 
        double dampingRatio; 
        double dampingRatioSmoothing; 
        double response; 
        double responseSmoothing; 
    }  _trackingParameters;
    bool  _transitioningFromTracking;
}

@property (nonatomic) double maximumTarget;
@property (nonatomic) double minimumTarget;
@property (nonatomic) struct ARFLSpringParameters { double x1; double x2; double x3; double x4; } parameters;
@property (nonatomic, readonly) double projectedTarget;
@property (nonatomic) double projectionDeceleration;
@property (nonatomic) double retargetResponseFraction;
@property (nonatomic) double rubberbandFactor;
@property (nonatomic) double rubberbandRange;
@property (nonatomic) double target;
@property (getter=isTracking, nonatomic) bool tracking;
@property (nonatomic) struct ARFLSpringParameters { double x1; double x2; double x3; double x4; } trackingParameters;
@property (nonatomic) double value;
@property (nonatomic) double velocity;

+ (id)springWithValue:(double)arg1;

- (struct ARFLSpringParameters { double x1; double x2; double x3; double x4; })_effectiveParameters;
- (double)_projectedTargetForVelocity:(double)arg1;
- (void)_updateForEffectiveParameters;
- (id)init;
- (id)initWithValue:(double)arg1;
- (bool)isTracking;
- (double)maximumTarget;
- (double)minimumTarget;
- (struct ARFLSpringParameters { double x1; double x2; double x3; double x4; })parameters;
- (double)projectedTarget;
- (double)projectionDeceleration;
- (void)resetImmediatelyToValue:(double)arg1;
- (double)retargetResponseFraction;
- (double)rubberbandFactor;
- (double)rubberbandRange;
- (void)setMaximumTarget:(double)arg1;
- (void)setMinimumTarget:(double)arg1;
- (void)setParameters:(struct ARFLSpringParameters { double x1; double x2; double x3; double x4; })arg1;
- (void)setProjectionDeceleration:(double)arg1;
- (void)setRetargetResponseFraction:(double)arg1;
- (void)setRubberbandFactor:(double)arg1;
- (void)setRubberbandRange:(double)arg1;
- (void)setTarget:(double)arg1;
- (void)setTracking:(bool)arg1;
- (void)setTrackingParameters:(struct ARFLSpringParameters { double x1; double x2; double x3; double x4; })arg1;
- (void)setUsesDampingRatioResponseForSmoothing:(bool)arg1;
- (void)setValue:(double)arg1;
- (void)setVelocity:(double)arg1;
- (void)step:(double)arg1;
- (double)target;
- (struct ARFLSpringParameters { double x1; double x2; double x3; double x4; })trackingParameters;
- (bool)usesDampingRatioResponseForSmoothing;
- (double)value;
- (double)velocity;

@end
