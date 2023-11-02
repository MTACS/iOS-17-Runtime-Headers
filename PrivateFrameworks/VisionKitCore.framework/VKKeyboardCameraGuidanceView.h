
@interface VKKeyboardCameraGuidanceView : UIView {
    UIVisualEffectView * _blurView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    bool  _didAddConstraints;
    UILabel * _label;
    double  _lastVisibleTime;
    double  _preferredMaxLayoutWidth;
    unsigned long long  _state;
    NSString * _text;
    double  _visibleStartTime;
}

@property (nonatomic) double preferredMaxLayoutWidth;

- (void).cxx_destruct;
- (void)_reallyHideGuidance;
- (void)_reallyShowGuidance;
- (void)didMoveToSuperview;
- (void)hideGuidance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)preferredMaxLayoutWidth;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)showGuidanceWithText:(id)arg1;
- (id)viewForFirstBaselineLayout;

@end
