
@interface SidebarContentDimmingView : UIView <UIGestureRecognizerDelegate> {
    <SidebarContentDimmingViewDelegate> * _delegate;
    UIView * _dimmingView;
    UITapGestureRecognizer * _dismissRecognizer;
    UIView * _passthroughView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SidebarContentDimmingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *passthroughView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissRecognized:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dimmedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)passthroughView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDimmedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPassthroughView:(id)arg1;
- (void)setTransparent:(bool)arg1;

@end
