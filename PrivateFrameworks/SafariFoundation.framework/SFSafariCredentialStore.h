
@interface SFSafariCredentialStore : NSObject

+ (bool)_appIsEntitledWebBrowser:(id)arg1;
+ (void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_bestDomainFromApprovedDomainsForWebCredentials:(id)arg1 appLinks:(id)arg2 otherServices:(id)arg3 appID:(id)arg4 appNames:(id)arg5 allDomains:(id*)arg6;
+ (id)_credentialProviderExtensionHelperProxy;
+ (id)_credentialsForWebBrowserWithWebsiteURL:(id)arg1 webFrameIdentifier:(id)arg2;
+ (id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 savedAccounts:(id)arg3;
+ (void)_fetchKeychainCredentialsIfRequiredWithSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 webFrameIdentifier:(id)arg3 isEntitledWebBrowser:(bool)arg4 completion:(id /* block */)arg5;
+ (void)_getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 shouldAnalyzeExistingCredentials:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (void)_getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 maximumNumberOfEntriesToReturn:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)_getBundleIDForPrimaryCredentialProviderWithCompletionHandler:(id /* block */)arg1;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 isEntitledWebBrowser:(bool)arg3 completionHandler:(id /* block */)arg4;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 webFrameIdentifier:(id)arg3 isEntitledWebBrowser:(bool)arg4 completionHandler:(id /* block */)arg5;
+ (void)_getDomainsApprovedForWebCredentials:(id*)arg1 domainsApprovedForAppLinks:(id*)arg2 domainsApprovedForOtherServices:(id*)arg3 fromDatabaseEntries:(id)arg4;
+ (void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 isEntitledWebBrowser:(bool)arg3 completion:(id /* block */)arg4;
+ (id)_highLevelDomainsFromDatabaseEntries:(id)arg1;
+ (bool)_savedAccount:(id)arg1 isRelatedToEntryHighLevelDomains:(id)arg2 andWebsiteURL:(id)arg3;
+ (long long)_scoreForDomain:(id)arg1 domainsApprovedForWebCredentials:(id)arg2 domainsApprovedForAppLinks:(id)arg3 domainsApprovedForOtherServices:(id)arg4 appNames:(id)arg5;
+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2;
+ (id)appNamesForAppID:(id)arg1;
+ (void)bestDomainForAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)bestDomainForAutoFillFromDomains:(id)arg1 appID:(id)arg2;
+ (void)getAllApprovedSharedWebCredentialsEntries:(id /* block */)arg1;
+ (void)getAllApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getAllCredentialsWithCompletionHandler:(id /* block */)arg1;
+ (void)getAllExternalPasskeyCredentialIdentitiesWithCompletionHandler:(id /* block */)arg1;
+ (void)getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getCanSaveCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 websiteURL:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)getCredentialsForAppWithAppID:(id)arg1 frameIdentifier:(id)arg2 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg3 websiteURL:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)getCredentialsForAppWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)getExternalPasskeyCredentialIdentitiesForDomains:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)isAppAutoFillAvailable;
+ (bool)isRemoteAutoFillAvailable;
+ (id)textSuggestionHeaderForExternalCredential:(id)arg1;
+ (id)titleForPasswordCredentialIdentity:(id)arg1 formURL:(id)arg2;

@end
