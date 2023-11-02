
@interface NCDimmableView : NCHitTestTransparentView <NCNotificationListDimmable, PLContentSizeManaging> {
    NCNotificationListStackBackgroundDimmingView * _backgroundDimmingView;
    UIView<PLContentSizeManaging><NCNotificationListDimmable> * _contentView;
    NCNotificationListStackDimmingOverlayView * _stackDimmingOverlayView;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    UIView * _viewToFadeWhenDimming;
}

@property (nonatomic) NCNotificationListStackBackgroundDimmingView *backgroundDimmingView;
@property (nonatomic) UIView<PLContentSizeManaging><NCNotificationListDimmable> *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIView *viewToFadeWhenDimming;

- (void).cxx_destruct;
- (id)_effectiveContentView;
- (id)backgroundDimmingView;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundDimmingView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setViewToFadeWhenDimming:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)viewToFadeWhenDimming;

@end
