
@interface _UIScrollDynamics : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOrigin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _decelerationTarget;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _initialVelocity;
    bool  _shouldRoundCalculations;
    struct CGSize { 
        double width; 
        double height; 
    }  _tolerance;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOrigin;
@property (nonatomic) struct CGPoint { double x1; double x2; } decelerationTarget;
@property (nonatomic, readonly) double durationUntilStop;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialContentOffset;
@property (nonatomic) struct CGVector { double x1; double x2; } initialVelocity;
@property (nonatomic) bool shouldRoundCalculations;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tolerance;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;

- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGPoint { double x1; double x2; })contentOrigin;
- (struct CGPoint { double x1; double x2; })decelerationTarget;
- (double)durationUntilStop;
- (id)init;
- (id)initWithInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGVector { double x1; double x2; })arg2 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 screenScale:(double)arg5;
- (struct CGPoint { double x1; double x2; })initialContentOffset;
- (struct CGVector { double x1; double x2; })initialVelocity;
- (bool)isRubberBandingAfterDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })positionAfterDuration:(double)arg1;
- (void)recalculateForDecelerationTarget:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDecelerationTarget:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialVelocity:(struct CGVector { double x1; double x2; })arg1;
- (void)setShouldRoundCalculations:(bool)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRoundCalculations;
- (double)speedAfterDuration:(double)arg1;
- (struct CGSize { double x1; double x2; })tolerance;
- (struct CGVector { double x1; double x2; })velocityAfterDuration:(double)arg1;
- (struct CGSize { double x1; double x2; })viewSize;

@end
