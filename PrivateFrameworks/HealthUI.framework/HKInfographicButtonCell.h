
@interface HKInfographicButtonCell : UITableViewCell {
    UIButton * _button;
    id /* block */  _buttonTapHandler;
    UIButtonConfiguration * _configuration;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, copy) id /* block */ buttonTapHandler;
@property (nonatomic, copy) UIButtonConfiguration *configuration;

- (void).cxx_destruct;
- (void)_constrainButton;
- (void)_didTapButton;
- (id)button;
- (id /* block */)buttonTapHandler;
- (id)configuration;
- (void)setButton:(id)arg1;
- (void)setButtonTapHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfiguration:(id)arg1 buttonTapHandler:(id /* block */)arg2;

@end
