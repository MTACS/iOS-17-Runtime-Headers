
@interface NTKEditOptionPickerSideView : UIView {
    double  _contentAlpha;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentTransform;
    UIView * _optionView;
}

@property (nonatomic, retain) UIView *optionView;

- (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)applyContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)optionView;
- (void)setOptionView:(id)arg1;
- (void)setRotationFromFront:(double)arg1;

@end
