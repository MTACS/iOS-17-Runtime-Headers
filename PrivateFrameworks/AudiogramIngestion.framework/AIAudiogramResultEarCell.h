
@interface AIAudiogramResultEarCell : UITableViewCell <UITextFieldDelegate> {
    <AIAudiogramResultEarCellDelegate> * _delegate;
    long long  _ear;
    NSNumber * _frequency;
    NSNumber * _hearingLevel;
    UIStackView * _labelStackView;
    UILabel * _titleLabel;
    UITextField * _valueTextField;
    UILabel * _valueUnitLabel;
    UIStackView * _verticalStackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AIAudiogramResultEarCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long ear;
@property (nonatomic, retain) NSNumber *frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *hearingLevel;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UITextField *valueTextField;
@property (nonatomic, retain) UILabel *valueUnitLabel;
@property (nonatomic, retain) UIStackView *verticalStackView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_textFieldEditingChanged:(id)arg1;
- (id)accessibilityLabel;
- (void)configureLayout;
- (id)delegate;
- (long long)ear;
- (id)frequency;
- (id)hearingLevel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelStackView;
- (void)setDelegate:(id)arg1;
- (void)setEar:(long long)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHearingLevel:(id)arg1;
- (void)setKeyboardToolbar:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueTextField:(id)arg1;
- (void)setValueUnitLabel:(id)arg1;
- (void)setVerticalStackView:(id)arg1;
- (void)showActive:(bool)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)titleLabel;
- (id)valueTextField;
- (id)valueUnitLabel;
- (id)verticalStackView;

@end
