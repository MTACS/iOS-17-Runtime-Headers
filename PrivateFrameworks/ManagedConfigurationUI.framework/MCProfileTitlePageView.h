
@interface MCProfileTitlePageView : MCSectionBasedTableView {
    UIView * _bottomBarView;
    UIButton * _cancelButton;
    UIButton * _infoButton;
    UIButton * _installButton;
    UIView * _topBarView;
}

@property (nonatomic, readonly) UIView *bottomBarView;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, readonly) UIButton *infoButton;
@property (nonatomic, readonly) UIButton *installButton;
@property (nonatomic, readonly) UIView *topBarView;

- (void).cxx_destruct;
- (id)_createBottomView;
- (id)_createCancelButton;
- (id)_createInfoButton;
- (id)_createInstallButton;
- (id)bottomBarView;
- (id)cancelButton;
- (id)infoButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)installButton;
- (void)layoutSubviews;
- (void)showBottomView:(bool)arg1 animated:(bool)arg2;
- (id)topBarView;

@end
