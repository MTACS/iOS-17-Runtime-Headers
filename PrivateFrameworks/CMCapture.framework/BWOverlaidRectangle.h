
@interface BWOverlaidRectangle : NSObject {
    int  _animationState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _disappeared;
    int  _displayStyle;
    int  _numFramesFullyVisible;
    BWRamp * _rampAnimation;
}

@property (nonatomic) int animationState;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool disappeared;
@property (nonatomic, readonly) int displayStyle;
@property (nonatomic) int numFramesFullyVisible;
@property (nonatomic, retain) BWRamp *rampAnimation;

- (int)animationState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (bool)disappeared;
- (int)displayStyle;
- (id)initWithDisplayStyle:(int)arg1;
- (int)numFramesFullyVisible;
- (id)rampAnimation;
- (void)setAnimationState:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisappeared:(bool)arg1;
- (void)setNumFramesFullyVisible:(int)arg1;
- (void)setRampAnimation:(id)arg1;

@end
