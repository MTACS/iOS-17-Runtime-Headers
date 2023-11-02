
@interface UITextAutofillSuggestion : UITextSuggestion {
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)autofillSuggestionWithUsername:(id)arg1 password:(id)arg2;

- (void).cxx_destruct;
- (id)_keyboardCandidate;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)password;
- (id)username;

@end
