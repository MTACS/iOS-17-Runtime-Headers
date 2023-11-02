
@interface SFAuthenticateAccountResult : NSObject {
    NSArray * _authenticatedAccounts;
    bool  _isVoiceProfileAvailable;
    NSArray * _keyboards;
    NSArray * _knownHomeUserIdentifiers;
    NSString * _localeIdentifier;
    NSString * _preferredLanguageCode;
    NSArray * _preferredLanguages;
}

@property (nonatomic, readonly) NSArray *authenticatedAccounts;
@property (nonatomic, readonly) bool isVoiceProfileAvailable;
@property (nonatomic, copy) NSArray *keyboards;
@property (nonatomic, readonly) NSArray *knownHomeUserIdentifiers;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic, copy) NSString *preferredLanguageCode;
@property (nonatomic, copy) NSArray *preferredLanguages;

- (void).cxx_destruct;
- (id)authenticatedAccounts;
- (id)initWithAuthenticatedAccounts:(id)arg1 knownHomeUserIdentifiers:(id)arg2 isVoiceProfileAvailable:(bool)arg3;
- (bool)isVoiceProfileAvailable;
- (id)keyboards;
- (id)knownHomeUserIdentifiers;
- (id)localeIdentifier;
- (id)preferredLanguageCode;
- (id)preferredLanguages;
- (void)setKeyboards:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setPreferredLanguageCode:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;

@end
