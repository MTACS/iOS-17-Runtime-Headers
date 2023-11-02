
@interface HKTitleDetailOptionalButtonView : UIView {
    UIButton * _button;
    id /* block */  _buttonAction;
    NSArray * _buttonOmittedConstraints;
    NSArray * _buttonPresentConstraints;
    UILabel * _detailLabel;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (id)_buttonConfigurationWithButtonTitle:(id)arg1;
- (void)buttonTapped;
- (id)init;
- (void)populateWithTitle:(id)arg1 detail:(id)arg2 buttonText:(id)arg3 buttonAction:(id /* block */)arg4;
- (void)setUp;

@end
