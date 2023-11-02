
@interface LUILogOptionsView : UIView {
    UIStackView * _buttonStackView;
    UIButton * _halfHourButton;
    UIButton * _hourButton;
    UIButton * _lastDayButton;
    UIButton * _streamButton;
    UIButton * _tenMinutesLogButton;
}

@property (nonatomic, retain) UIStackView *buttonStackView;
@property (nonatomic, retain) UIButton *halfHourButton;
@property (nonatomic, retain) UIButton *hourButton;
@property (nonatomic, retain) UIButton *lastDayButton;
@property (nonatomic, retain) UIButton *streamButton;
@property (nonatomic, retain) UIButton *tenMinutesLogButton;

- (void).cxx_destruct;
- (id)_createButtonStackView;
- (id)_createButtonWithTitle:(id)arg1;
- (void)_setup;
- (id)buttonStackView;
- (id)halfHourButton;
- (id)hourButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastDayButton;
- (void)layoutSubviews;
- (void)setButtonStackView:(id)arg1;
- (void)setHalfHourButton:(id)arg1;
- (void)setHourButton:(id)arg1;
- (void)setLastDayButton:(id)arg1;
- (void)setStreamButton:(id)arg1;
- (void)setTenMinutesLogButton:(id)arg1;
- (id)streamButton;
- (id)tenMinutesLogButton;

@end
