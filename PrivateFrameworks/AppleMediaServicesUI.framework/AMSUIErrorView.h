
@interface AMSUIErrorView : AMSUICommonView {
    _UIContentUnavailableView * _backingView;
}

@property (nonatomic, retain) _UIContentUnavailableView *backingView;
@property (nonatomic, copy) id /* block */ buttonAction;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_handleButtonTap;
- (id)backingView;
- (id /* block */)buttonAction;
- (id)buttonTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2;
- (void)layoutSubviews;
- (id)message;
- (void)setBackingView:(id)arg1;
- (void)setButtonAction:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
