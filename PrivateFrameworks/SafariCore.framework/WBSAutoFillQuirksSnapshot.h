
@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _autoFillQuirks;
    NSDictionary * _changePasswordURLsByDomain;
    NSSet * _domainsForPasskeyFallbackUI;
    NSSet * _domainsIneligibleForAutomaticLogin;
    NSSet * _domainsIneligibleForPasskeys;
    NSArray * _domainsIneligibleForPasswordAuditing;
    NSSet * _domainsIneligibleForStreamlinedLogin;
    NSArray * _domainsToConsiderIdentical;
    NSArray * _domainsWithAssociatedCredentials;
    NSDictionary * _passwordRequirementsByDomain;
}

@property (nonatomic, readonly, copy) NSDictionary *changePasswordURLsByDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *domainsForPasskeyFallbackUI;
@property (nonatomic, readonly, copy) NSSet *domainsIneligibleForAutomaticLogin;
@property (nonatomic, readonly, copy) NSSet *domainsIneligibleForPasskeys;
@property (nonatomic, readonly, copy) NSArray *domainsIneligibleForPasswordAuditing;
@property (nonatomic, readonly, copy) NSSet *domainsIneligibleForStreamlinedLogin;
@property (nonatomic, readonly, copy) NSArray *domainsToConsiderIdentical;
@property (nonatomic, readonly, copy) NSArray *domainsWithAssociatedCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *passwordRequirementsByDomain;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changePasswordURLStringsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2;
- (id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg1 error:(id*)arg2;
- (id)_domainsSetFromAutoFillQuirks:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)arg1 error:(id*)arg2;
- (id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id*)arg2;
- (id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id*)arg2;
- (id)changePasswordURLsByDomain;
- (id)domainsForPasskeyFallbackUI;
- (id)domainsIneligibleForAutomaticLogin;
- (id)domainsIneligibleForPasskeys;
- (id)domainsIneligibleForPasswordAuditing;
- (id)domainsIneligibleForStreamlinedLogin;
- (id)domainsToConsiderIdentical;
- (id)domainsWithAssociatedCredentials;
- (id)init;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (id)passwordRequirementsByDomain;
- (id)plistDataWithFormat:(unsigned long long)arg1;

@end
