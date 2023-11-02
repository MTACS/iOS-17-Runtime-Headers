
@interface UIDictationConnectionOptions : NSObject {
    bool  _acceptsDictationSearchResults;
    NSString * _activationIdentifier;
    unsigned long long  _activationType;
    bool  _autoPunctuation;
    NSString * _fieldIdentifier;
    long long  _keyboardType;
    NSString * _languageCode;
    NSString * _layoutIdentifier;
    NSString * _postfixText;
    NSString * _prefixText;
    NSString * _regionCode;
    long long  _returnKeyType;
    bool  _secureInput;
    NSString * _selectedText;
    id  _turnIdentifier;
    bool  _useAutomaticEndpointing;
    unsigned long long  _version;
}

@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic, copy) NSString *activationIdentifier;
@property (nonatomic) unsigned long long activationType;
@property (nonatomic) bool autoPunctuation;
@property (nonatomic, copy) NSString *fieldIdentifier;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *layoutIdentifier;
@property (nonatomic, copy) NSString *postfixText;
@property (nonatomic, copy) NSString *prefixText;
@property (nonatomic, copy) NSString *regionCode;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) bool secureInput;
@property (nonatomic, copy) NSString *selectedText;
@property (nonatomic, copy) id turnIdentifier;
@property (nonatomic) bool useAutomaticEndpointing;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (bool)acceptsDictationSearchResults;
- (id)activationIdentifier;
- (unsigned long long)activationType;
- (bool)autoPunctuation;
- (id)fieldIdentifier;
- (long long)keyboardType;
- (id)languageCode;
- (id)layoutIdentifier;
- (id)postfixText;
- (id)prefixText;
- (id)regionCode;
- (long long)returnKeyType;
- (bool)secureInput;
- (id)selectedText;
- (void)setAcceptsDictationSearchResults:(bool)arg1;
- (void)setActivationIdentifier:(id)arg1;
- (void)setActivationType:(unsigned long long)arg1;
- (void)setAutoPunctuation:(bool)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayoutIdentifier:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecureInput:(bool)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setTurnIdentifier:(id)arg1;
- (void)setUseAutomaticEndpointing:(bool)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)turnIdentifier;
- (bool)useAutomaticEndpointing;
- (unsigned long long)version;

@end
