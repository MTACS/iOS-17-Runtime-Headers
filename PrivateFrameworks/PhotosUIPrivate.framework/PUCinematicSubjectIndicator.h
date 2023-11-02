
@interface PUCinematicSubjectIndicator : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedFocusSize;
    CEKSubjectIndicatorView * _fixedFocusView;
    bool  _isPulsing;
    long long  _shape;
    CEKCinematicSubjectIndicatorView * _subjectView;
}

@property (nonatomic) bool isPulsing;
@property (nonatomic) long long shape;

- (void).cxx_destruct;
- (void)_startPulseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPulsing;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsPulsing:(bool)arg1;
- (void)setShape:(long long)arg1;
- (void)setShape:(long long)arg1 animated:(bool)arg2;
- (long long)shape;

@end
