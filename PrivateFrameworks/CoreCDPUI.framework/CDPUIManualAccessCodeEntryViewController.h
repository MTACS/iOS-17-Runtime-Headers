
@interface CDPUIManualAccessCodeEntryViewController : OBWelcomeController <CDPUIAccessCodeEntryTextFieldDelegate> {
    UIStackView * _codeEntryStackView;
    UIStackView * _contentStackView;
    <CDPUIManualAccessCodeEntryViewControllerDelegate> * _delegate;
    CDPUIAccessCodeEntryTextField * _entryTextView;
    UILabel * _errorLabelView;
    UITextView * _prefixView;
}

@property (nonatomic, retain) UIStackView *codeEntryStackView;
@property (nonatomic, retain) UIStackView *contentStackView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPUIManualAccessCodeEntryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CDPUIAccessCodeEntryTextField *entryTextView;
@property (nonatomic, retain) UILabel *errorLabelView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextView *prefixView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessCodeEntryStackView;
- (id)_contentStackView;
- (id)_errorLabelView;
- (id)_labelView;
- (id)_manualAccessCodeTextView;
- (void)_setupView;
- (id)_wrappingKeySubstringFromAccessKey:(id)arg1;
- (void)accessCodeEntryTextFieldDidReturn:(id)arg1;
- (void)accessCodeEntryTextFieldDidUpdate:(id)arg1;
- (id)codeEntryStackView;
- (id)contentStackView;
- (id)delegate;
- (id)entryTextView;
- (id)errorLabelView;
- (id)init;
- (id)prefixView;
- (void)setCodeEntryStackView:(id)arg1;
- (void)setContentStackView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntryTextView:(id)arg1;
- (void)setErrorLabelView:(id)arg1;
- (void)setPrefixView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
