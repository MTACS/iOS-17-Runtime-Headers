
@interface _SFTextSuggestion : UITextSuggestion {
    SFCredentialIdentity * _credentialIdentity;
    WBSCreditCardData * _creditCardData;
    WBSHideMyEmailRecord * _emailRecord;
    NSString * _generatedPassword;
    SFAutoFillOneTimeCode * _oneTimeCode;
    WBSSavedAccountMatch * _savedAccountMatch;
    SFSingleCreditCardData * _singleCreditCardData;
    WBUAutoFillDisplayData * _singleDisplayData;
    bool  _submitForm;
    long long  _textSuggestionType;
    NSURLCredential * _urlCredential;
    NSString * _username;
}

@property (nonatomic, readonly) SFCredentialIdentity *credentialIdentity;
@property (nonatomic, readonly) WBSCreditCardData *creditCardData;
@property (nonatomic, readonly) WBSHideMyEmailRecord *emailRecord;
@property (nonatomic, readonly) NSString *generatedPassword;
@property (nonatomic, readonly) SFAutoFillOneTimeCode *oneTimeCode;
@property (nonatomic, readonly) WBSSavedAccountMatch *savedAccountMatch;
@property (nonatomic, readonly) SFSingleCreditCardData *singleCreditCardData;
@property (nonatomic, readonly) WBUAutoFillDisplayData *singleDisplayData;
@property (nonatomic, readonly) bool submitForm;
@property (nonatomic, readonly) long long textSuggestionType;
@property (nonatomic, readonly) NSURLCredential *urlCredential;
@property (nonatomic, readonly) NSString *username;

+ (bool)supportsSecureCoding;
+ (id)textSuggestionToProvisionHideMyEmailRecord;
+ (id)textSuggestionWithCredentialIdentity:(id)arg1 submitForm:(bool)arg2;
+ (id)textSuggestionWithCreditCardData:(id)arg1;
+ (id)textSuggestionWithGeneratedPassword:(id)arg1;
+ (id)textSuggestionWithHideMyEmailRecord:(id)arg1;
+ (id)textSuggestionWithOneTimeCode:(id)arg1;
+ (id)textSuggestionWithSavedAccountMatch:(id)arg1 submitForm:(bool)arg2;
+ (id)textSuggestionWithSingleCreditCardDataValue:(id)arg1;
+ (id)textSuggestionWithSingleDisplayData:(id)arg1;
+ (id)textSuggestionWithUsername:(id)arg1;

- (void).cxx_destruct;
- (id)credentialIdentity;
- (id)creditCardData;
- (id)emailRecord;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedPassword;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextSuggestionType:(long long)arg1;
- (id)oneTimeCode;
- (id)savedAccountMatch;
- (id)singleCreditCardData;
- (id)singleDisplayData;
- (bool)submitForm;
- (long long)textSuggestionType;
- (id)urlCredential;
- (id)username;

@end
