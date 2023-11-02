
@interface _NCContentUnavailableViewWithButton : UIView {
    UIView * _backgroundView;
    id /* block */  _buttonHandler;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, copy) id /* block */ buttonHandler;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_configureBackgroundView;
- (void)_configureTitleLabelWithTitle:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateVisualStyling;
- (id)_visualStylingProviderForCategory:(long long)arg1;
- (id)backgroundView;
- (id /* block */)buttonHandler;
- (void)didMoveToWindow;
- (id)initWithTitle:(id)arg1 buttonAction:(id /* block */)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)setButtonHandler:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
