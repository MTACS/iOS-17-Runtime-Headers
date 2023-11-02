
@interface _SFAutoFillInputView : UIInputView {
    NSString * _credentialSource;
    NSString * _customTitle;
    <_SFAutoFillInputViewDelegate> * _delegate;
    NSMutableArray * _dynamicConstraints;
    UILabel * _explanationLabel;
    UIButton * _fillCredentialButton;
    NSString * _hostString;
    UIButton * _keyboardButton;
    UIButton * _otherPasswordsButton;
    _SFTextSuggestion * _suggestion;
}

@property (nonatomic) <_SFAutoFillInputViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_fillCredential:(id)arg1;
- (void)_showMorePasswords:(id)arg1;
- (void)_showStandardKeyboard:(id)arg1;
- (void)_updateDynamicConstraints;
- (void)_updateFillCredentialButtonLabelMetrics;
- (id)delegate;
- (id)initWithHostString:(id)arg1 credentialSource:(id)arg2 suggestion:(id)arg3 customTitle:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateSuggestionIfNecessary:(id)arg1;

@end
