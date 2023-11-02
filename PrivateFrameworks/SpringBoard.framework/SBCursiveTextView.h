
@interface SBCursiveTextView : UIView {
    CAShapeLayer * _textLayer;
    SBCursiveTextPath * _textPath;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _textTransform;
}

@property (nonatomic, readonly) double duration;

- (void).cxx_destruct;
- (void)configure;
- (double)duration;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)loadText:(id)arg1 pointSize:(double)arg2;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setTime:(float)arg1;

@end
