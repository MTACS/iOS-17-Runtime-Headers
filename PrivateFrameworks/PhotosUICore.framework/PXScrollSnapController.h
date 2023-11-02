
@interface PXScrollSnapController : NSObject {
    double  _maximumAccelerationFactor;
    double  _maximumDecelerationFactor;
    double  _minimumSpeed;
    long long  _scrollAxis;
    <PXScrollablePageSource> * _scrollablePageSource;
    long long  _snapBehavior;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _visibilityInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic) double maximumAccelerationFactor;
@property (nonatomic) double maximumDecelerationFactor;
@property (nonatomic) double minimumSpeed;
@property (nonatomic) long long scrollAxis;
@property (nonatomic) <PXScrollablePageSource> *scrollablePageSource;
@property (nonatomic) long long snapBehavior;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } visibilityInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })adjustedTargetVisibleOriginForProposedTargetVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1 scrollingVelocity:(struct CGPoint { double x1; double x2; })arg2 decelerationRate:(inout long long*)arg3;
- (id)init;
- (id)initWithSnapBehavior:(long long)arg1 scrollAxis:(long long)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 visibilityInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 scrollablePageSource:(id)arg5;
- (double)maximumAccelerationFactor;
- (double)maximumDecelerationFactor;
- (double)minimumSpeed;
- (long long)scrollAxis;
- (id)scrollablePageSource;
- (void)setMaximumAccelerationFactor:(double)arg1;
- (void)setMaximumDecelerationFactor:(double)arg1;
- (void)setMinimumSpeed:(double)arg1;
- (void)setScrollAxis:(long long)arg1;
- (void)setScrollablePageSource:(id)arg1;
- (void)setSnapBehavior:(long long)arg1;
- (void)setVisibilityInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)snapBehavior;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })visibilityInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
