
@interface SBHomeGrabberRotationView : UIView {
    SBFHomeGrabberSettings * _grabberSettings;
    SBHomeGrabberView * _grabberView;
    long long  _orientation;
    NSMutableArray * _rotationWrapperViews;
    bool  _useRotationWrapperViews;
}

@property (nonatomic, readonly) SBHomeGrabberView *grabberView;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)_addWrapperViewWithOrientation:(long long)arg1;
- (id)grabberView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(id)arg2 useRotationWrapperViews:(bool)arg3;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2 rotationSettings:(id)arg3;

@end
