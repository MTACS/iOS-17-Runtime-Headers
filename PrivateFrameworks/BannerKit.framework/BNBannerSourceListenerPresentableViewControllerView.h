
@interface BNBannerSourceListenerPresentableViewControllerView : UIView {
    <BNBannerSourceListenerPresentableViewControllerViewDelegate> * _delegate;
}

@property (nonatomic) <BNBannerSourceListenerPresentableViewControllerViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
