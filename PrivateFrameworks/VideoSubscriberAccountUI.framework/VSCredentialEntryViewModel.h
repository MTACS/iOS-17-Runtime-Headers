
@interface VSCredentialEntryViewModel : VSCuratedViewModel {
    NSString * _additionalMessage;
    VSExpressionEvaluator * _buttonExpressionEvaluator;
    NSArray * _buttons;
    NSArray * _credentialEntryFields;
    <VSCredentialEntryViewModelDelegate> * _delegate;
    NSString * _linkTitle;
    NSURL * _linkURL;
    VSCredentialEntryPicker * _picker;
    NSString * _recentsMessage;
    NSString * _recentsTitle;
}

@property (nonatomic, copy) NSString *additionalMessage;
@property (nonatomic, retain) VSExpressionEvaluator *buttonExpressionEvaluator;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, retain) NSArray *credentialEntryFields;
@property (nonatomic) <VSCredentialEntryViewModelDelegate> *delegate;
@property (nonatomic, copy) NSString *linkTitle;
@property (nonatomic, copy) NSURL *linkURL;
@property (nonatomic, retain) VSCredentialEntryPicker *picker;
@property (nonatomic, copy) NSString *recentsMessage;
@property (nonatomic, copy) NSString *recentsTitle;

- (void).cxx_destruct;
- (void)_bindField:(id)arg1;
- (void)_unbindField:(id)arg1;
- (id)additionalMessage;
- (id)buttonExpressionEvaluator;
- (void)buttonTappedAtIndex:(unsigned long long)arg1;
- (id)buttons;
- (void)clearFieldsAfterUsername;
- (void)configureWithRequest:(id)arg1;
- (id)credentialEntryFields;
- (id)delegate;
- (id)linkTitle;
- (id)linkURL;
- (id)picker;
- (void)pickerDidSelectRow:(unsigned long long)arg1;
- (id)recentsMessage;
- (id)recentsTitle;
- (void)setAdditionalMessage:(id)arg1;
- (void)setButtonExpressionEvaluator:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCredentialEntryFields:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkTitle:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setPicker:(id)arg1;
- (void)setRecentsMessage:(id)arg1;
- (void)setRecentsTitle:(id)arg1;
- (void)validateCredentialEntryFields;

@end
