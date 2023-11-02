
@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate> {
    WBSAutoFillAssociatedDomainsManager * _associatedDomainsManager;
    WBSChangePasswordURLManager * _changePasswordURLManager;
    WBSPasswordAuditingEligibleDomainsManager * _passwordAuditingEligibleDomainsManager;
    WBSPasswordGenerationManager * _passwordGenerationManager;
    WBSRemotePlistController * _remotePlistController;
    bool  _shouldAttemptToDownloadConfiguration;
}

@property (nonatomic, readonly) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (nonatomic, readonly) WBSChangePasswordURLManager *changePasswordURLManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (nonatomic, readonly) WBSPasswordGenerationManager *passwordGenerationManager;
@property (nonatomic) bool shouldAttemptToDownloadConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changePasswordURLStringsFromCurrentSnapshot;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_domainsToConsiderIdenticalFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (bool)_isURL:(id)arg1 containedInQuirks:(id /* block */)arg2;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (id)_urlFromRelyingParty:(id)arg1;
- (bool)arePasskeysDisallowedForRelyingParty:(id)arg1;
- (id)associatedDomainsManager;
- (void)beginLoadingQuirksFromDisk;
- (id)changePasswordURLManager;
- (void)didDownloadPlistForRemotePlistController:(id)arg1;
- (id)init;
- (id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (bool)isAutomaticLoginDisallowedOnURL:(id)arg1;
- (bool)isStreamlinedLoginDisallowedOnURL:(id)arg1;
- (id)passwordAuditingEligibleDomainsManager;
- (id)passwordGenerationManager;
- (void)prepareForTermination;
- (void)setShouldAttemptToDownloadConfiguration:(bool)arg1;
- (bool)shouldAttemptToDownloadConfiguration;
- (bool)shouldUseFallbackUIForRelyingParty:(id)arg1;

@end
