
@interface SFAccountDetailTOTPTableViewCell : UITableViewCell {
    NSTimer * _codeUpdateTimer;
    WBSTOTPGenerator * _generator;
    UIColor * _overrideVerificationCodeLabelTextColor;
    UILabel * _subtitleLabel;
    UIStackView * _titleAndVerificationCodeStackView;
    UILabel * _verificationCodeLabel;
}

@property (nonatomic, retain) UIColor *overrideVerificationCodeLabelTextColor;

- (void).cxx_destruct;
- (id)_attributedSubtitleString;
- (id)_attributedSubtitleStringWithRemainingSeconds:(unsigned long long)arg1;
- (id)_formattedCode;
- (void)_startTOTPTimerIfNeeded;
- (void)_updateCodeAndLabels;
- (void)_updateTitleAndVerificationCodeStackView;
- (void)_updateVerificationCodeLabelTextColor;
- (void)configureWithGenerator:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)overrideVerificationCodeLabelTextColor;
- (void)setOverrideVerificationCodeLabelTextColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
