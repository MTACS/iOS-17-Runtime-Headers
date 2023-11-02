
@interface TVRAlertView : UIView {
    UIView * _blendModeView;
    _TVRMAlertButton * _cancelButton;
    <TVRAlertViewDelegate> * _delegate;
    UIVisualEffectView * _effectView;
    UIView * _hairlineView;
    TVRPasscodeField * _passcodeField;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) TVRCPINEntryAttributes *PINEntryAttributes;
@property (nonatomic, retain) UIView *blendModeView;
@property (nonatomic, retain) _TVRMAlertButton *cancelButton;
@property (nonatomic) <TVRAlertViewDelegate> *delegate;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic, retain) UIView *hairlineView;
@property (nonatomic, retain) TVRPasscodeField *passcodeField;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)PINEntryAttributes;
- (void)_cancelButton:(id)arg1;
- (void)_passcodeFieldTapped;
- (void)_pinTextDidChange:(id)arg1;
- (bool)becomeFirstResponder;
- (id)blendModeView;
- (id)cancelButton;
- (id)delegate;
- (id)effectView;
- (id)hairlineView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)passcodeField;
- (bool)resignFirstResponder;
- (void)setBlendModeView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setHairlineView:(id)arg1;
- (void)setPINEntryAttributes:(id)arg1;
- (void)setPasscodeField:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)title;
- (id)titleLabel;

@end
