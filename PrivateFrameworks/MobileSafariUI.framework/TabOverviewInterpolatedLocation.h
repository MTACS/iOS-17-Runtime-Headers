
@interface TabOverviewInterpolatedLocation : NSObject {
    double  _decelerationFactor;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        double zOffset; 
        double logScale; 
    }  _instantaneousTargetLocation;
    bool  _interacting;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionFixedPoint;
    bool  _interactionIncludesScale;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        double zOffset; 
        double logScale; 
    }  _interactionLocation;
    double  _interactionLogScaleVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionVelocity;
    double  _lastInteractionTimestamp;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        double zOffset; 
        double logScale; 
    }  _lastRenderedLocation;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        double zOffset; 
        double logScale; 
    }  _location;
    double  _minimumTranslationSpeed;
    double  _previousInteractionLogScaleVelocity;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } offset; 
        double zOffset; 
        double logScale; 
    }  _targetLocation;
}

@property (nonatomic) double decelerationFactor;
@property (nonatomic, readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } location;
@property (nonatomic) double minimumTranslationSpeed;
@property (nonatomic) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } targetLocation;

- (void)beginInteractionAtTime:(double)arg1;
- (double)decelerationFactor;
- (double)decelerationFactorForTargetLocation:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)description;
- (void)endInteraction;
- (void)endInteractionWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithLocation:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 decelerationFactor:(double)arg2;
- (bool)interpolateByTimeInterval:(double)arg1 roundingAtSize:(struct CGSize { double x1; double x2; })arg2 zScaleFactor:(double)arg3 withHorizontalBounceFactor:(double)arg4 verticalBounceFactor:(double)arg5 constraints:(id /* block */)arg6;
- (bool)isInSteadyStateWithConstraints:(id /* block */)arg1;
- (bool)isInSteadyStateWithConstraints:(id /* block */)arg1 epsilon:(double)arg2;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })location;
- (double)minimumTranslationSpeed;
- (void)moveBy:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2;
- (void)moveInstantaneouslyBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)moveLogScaleBy:(double)arg1 centeringOffset:(struct CGPoint { double x1; double x2; })arg2 withLastCenteringOffset:(struct CGPoint { double x1; double x2; })arg3 atTime:(double)arg4;
- (void)moveLogScaleBy:(double)arg1 centeringOffset:(struct CGPoint { double x1; double x2; })arg2 withLastCenteringOffset:(struct CGPoint { double x1; double x2; })arg3 atTime:(double)arg4 shiftLocation:(bool)arg5;
- (void)resetRenderedLocation;
- (void)resetToLocation:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setDecelerationFactor:(double)arg1;
- (void)setMinimumTranslationSpeed:(double)arg1;
- (void)setTargetLocation:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)shiftTargetLocation:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })targetLocation;

@end
