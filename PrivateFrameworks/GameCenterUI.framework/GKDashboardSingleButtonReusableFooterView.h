
@interface GKDashboardSingleButtonReusableFooterView : UICollectionReusableView {
    UIButton * _button;
    NSLayoutConstraint * _buttonLeadingConstraint;
    id /* block */  _buttonTapHandler;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) NSLayoutConstraint *buttonLeadingConstraint;
@property (nonatomic, copy) id /* block */ buttonTapHandler;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)button;
- (id)buttonLeadingConstraint;
- (id /* block */)buttonTapHandler;
- (void)buttonTapped:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonLeadingConstraint:(id)arg1;
- (void)setButtonTapHandler:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1 forState:(unsigned long long)arg2;

@end
