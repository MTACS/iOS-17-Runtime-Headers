
@interface WBSSavedAccountMatchCriteria : NSObject {
    NSURL * _URL;
    WBSAutoFillAssociatedDomainsManager * _associatedDomainsManager;
    WBSSavedAccountContext * _context;
    unsigned long long  _options;
    NSString * _partialUsername;
    NSData * _passkeyCredentialIdentifier;
    WBSGlobalFrameIdentifier * _webFrameIdentifier;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) NSSet *associatedDomainsForURL;
@property (nonatomic, retain) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (nonatomic, copy) WBSSavedAccountContext *context;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSString *partialUsername;
@property (nonatomic, copy) NSData *passkeyCredentialIdentifier;
@property (nonatomic, readonly) bool queryShouldIncludePasskeyMatchesForNonAutoFillContext;
@property (nonatomic, readonly) bool queryShouldIncludeSavedAccountsWithDoNotSaveMarkers;
@property (nonatomic, readonly) bool queryShouldOmitAutoFillPasskeyMatches;
@property (nonatomic, readonly) bool queryShouldReturnSavedAccountsMatchingAssociatedDomains;
@property (nonatomic, readonly) bool queryShouldReturnSavedAccountsMatchingHighLevelAndSimplifiedDomains;
@property (nonatomic, readonly) bool queryShouldReturnSavedAccountsWithEmptyUsernames;
@property (nonatomic, readonly) WBSGlobalFrameIdentifier *webFrameIdentifier;

+ (id)criteriaForExactFQDNPasswordMatchesOfURL:(id)arg1;
+ (id)criteriaForNonAutofillablePasskeyWithCredentialIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_optionsDescription;
- (id)associatedDomainsForURL;
- (id)associatedDomainsManager;
- (id)context;
- (id)description;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3 associatedDomainsManager:(id)arg4 webFrameIdentifier:(id)arg5;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3 passkeyCredentialIdentifier:(id)arg4 associatedDomainsManager:(id)arg5 webFrameIdentifier:(id)arg6;
- (unsigned long long)options;
- (id)partialUsername;
- (id)passkeyCredentialIdentifier;
- (bool)queryShouldIncludePasskeyMatchesForNonAutoFillContext;
- (bool)queryShouldIncludeSavedAccountsWithDoNotSaveMarkers;
- (bool)queryShouldOmitAutoFillPasskeyMatches;
- (bool)queryShouldReturnSavedAccountsMatchingAssociatedDomains;
- (bool)queryShouldReturnSavedAccountsMatchingHighLevelAndSimplifiedDomains;
- (bool)queryShouldReturnSavedAccountsWithEmptyUsernames;
- (void)setAssociatedDomainsManager:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPartialUsername:(id)arg1;
- (void)setPasskeyCredentialIdentifier:(id)arg1;
- (void)setURL:(id)arg1;
- (id)webFrameIdentifier;

@end
