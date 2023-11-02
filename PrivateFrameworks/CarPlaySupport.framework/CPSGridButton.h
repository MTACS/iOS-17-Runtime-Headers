
@interface CPSGridButton : CPSButton {
    CPSAbridgableLabel * _customTitleLabel;
    UIView * _focusView;
    CPGridButton * _gridButton;
    <CPTemplateDelegate> * _templateDelegate;
}

@property (nonatomic, retain) CPSAbridgableLabel *customTitleLabel;
@property (nonatomic, retain) UIView *focusView;
@property (nonatomic, retain) CPGridButton *gridButton;
@property (nonatomic) <CPTemplateDelegate> *templateDelegate;

+ (id)buttonWithGridButton:(id)arg1 templateDelegate:(id)arg2;

- (void).cxx_destruct;
- (void)_updateLabelColor;
- (id)customTitleLabel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusView;
- (id)gridButton;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGridButton:(id)arg1;
- (void)layoutSubviews;
- (double)preferredLabelWidth;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setCustomTitleLabel:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFocusView:(id)arg1;
- (void)setGridButton:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (id)templateDelegate;
- (void)traitCollectionDidChange:(id)arg1;

@end
