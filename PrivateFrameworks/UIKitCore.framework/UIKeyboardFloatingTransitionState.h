
@interface UIKeyboardFloatingTransitionState : NSObject {
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _finalInputViewTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialInputViewTransform;
    UIView * _inputView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputViewFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _platterInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _platterViewFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scale;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } finalInputViewTransform;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } initialInputViewTransform;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputViewFrame;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } platterInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } platterViewFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } scale;

- (void).cxx_destruct;
- (id)borderColor;
- (double)borderWidth;
- (double)cornerRadius;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })finalInputViewTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })initialInputViewTransform;
- (id)inputView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputViewFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })platterInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })platterViewFrame;
- (struct CGPoint { double x1; double x2; })scale;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFinalInputViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setInitialInputViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setInputView:(id)arg1;
- (void)setInputViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlatterInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlatterViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(struct CGPoint { double x1; double x2; })arg1;

@end
