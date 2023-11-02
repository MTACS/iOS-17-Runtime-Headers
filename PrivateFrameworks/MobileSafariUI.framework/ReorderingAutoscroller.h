
@interface ReorderingAutoscroller : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _autoscrollInsets;
    <ReorderingAutoscrollerDelegate> * _delegate;
    CADisplayLink * _displayLink;
    double  _maximumSpeed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offsetError;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scrollableRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } autoscrollInsets;
@property (nonatomic) <ReorderingAutoscrollerDelegate> *delegate;
@property (nonatomic) double maximumSpeed;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollableRect;

- (void).cxx_destruct;
- (void)_autoscroll:(id)arg1;
- (void)_setVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })autoscrollInsets;
- (void)beginInteraction;
- (void)dealloc;
- (id)delegate;
- (void)endInteraction;
- (id)init;
- (double)maximumSpeed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollableRect;
- (void)setAutoscrollInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumSpeed:(double)arg1;
- (void)setScrollableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
