
@interface MCUIWatchManager : NSObject {
    NSMutableDictionary * _cachedProfileSummaries;
    NSMutableDictionary * _cachedProfiles;
    NSMutableDictionary * _cachedRMConfigurationViewModels;
    NSArray * _configProfilesInfo;
    unsigned long long  _fetchStatus;
    NSDictionary * _managedAppsUninstalledOnMDMRemoval;
    NSArray * _mdmProfilesInfo;
    NSSManager * _nssManager;
    ACAccount * _rmAccount;
}

@property (nonatomic, retain) NSMutableDictionary *cachedProfileSummaries;
@property (nonatomic, retain) NSMutableDictionary *cachedProfiles;
@property (nonatomic, retain) NSMutableDictionary *cachedRMConfigurationViewModels;
@property (nonatomic, retain) NSArray *configProfilesInfo;
@property (nonatomic) unsigned long long fetchStatus;
@property (nonatomic, retain) NSDictionary *managedAppsUninstalledOnMDMRemoval;
@property (nonatomic, retain) NSArray *mdmProfilesInfo;
@property (nonatomic, retain) NSSManager *nssManager;
@property (nonatomic, readonly) long long profileCount;
@property (nonatomic, retain) ACAccount *rmAccount;

+ (id)shared;

- (void).cxx_destruct;
- (void)_fetchProfiles;
- (void)_handleFetchProfilesError:(id)arg1;
- (void)_unarchiveProfilePayloadsSummaryFromData:(id)arg1 forProfileIdentifier:(id)arg2;
- (void)_unarchiveRMConfigurationViewModelsFromData:(id)arg1 forProfileIdentifier:(id)arg2;
- (void)_watchChanged:(id)arg1;
- (id)cachedMDMProfileIdentifier;
- (id)cachedProfileForIdentifier:(id)arg1;
- (id)cachedProfileSummaries;
- (id)cachedProfileSummaryForIdentifier:(id)arg1;
- (id)cachedProfiles;
- (id)cachedRMConfigurationViewModels;
- (id)cachedRMConfigurationViewModelsForIdentifier:(id)arg1;
- (id)configProfilesInfo;
- (void)fetchProfileIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)fetchStatus;
- (id)init;
- (void)installProfileData:(id)arg1 completion:(id /* block */)arg2;
- (id)managedAppsUninstalledOnMDMRemoval;
- (id)mdmProfilesInfo;
- (id)nssManager;
- (long long)profileCount;
- (void)reloadProfiles;
- (void)removeProfileIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)rmAccount;
- (void)setCachedProfileSummaries:(id)arg1;
- (void)setCachedProfiles:(id)arg1;
- (void)setCachedRMConfigurationViewModels:(id)arg1;
- (void)setConfigProfilesInfo:(id)arg1;
- (void)setFetchStatus:(unsigned long long)arg1;
- (void)setManagedAppsUninstalledOnMDMRemoval:(id)arg1;
- (void)setMdmProfilesInfo:(id)arg1;
- (void)setNssManager:(id)arg1;
- (void)setRmAccount:(id)arg1;

@end
