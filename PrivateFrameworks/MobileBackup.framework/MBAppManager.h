
@interface MBAppManager : NSObject {
    NSMutableDictionary * _containersByID;
    MBSettingsContext * _settingsContext;
    NSMutableDictionary * _systemDataContainersByID;
    NSMutableDictionary * _systemSharedContainersByID;
}

+ (id)_allPersistedDisabledDomainNamesForPersona:(id)arg1;
+ (void)_persistDisabledDomainNames:(id)arg1 forPersona:(id)arg2;
+ (id)appManager;
+ (id)appManagerWithSettingsContext:(id)arg1;

- (void).cxx_destruct;
- (id)_allDisabledDomainNamesForPersona:(id)arg1;
- (id)_copyAppsWithPlists:(id)arg1 volumeMountPoints:(id)arg2 safeHarbor:(bool)arg3 error:(id*)arg4;
- (id)_copySafeHarborsWithVolumeMountPoints:(id)arg1 error:(id*)arg2;
- (id)_copySystemContainersWithPlists:(id)arg1 volumeMountPoints:(id)arg2 error:(id*)arg3;
- (id)_copySystemContainersWithVolumeMountPoints:(id)arg1 error:(id*)arg2;
- (id)_copySystemPluginsWithPlists:(id)arg1 volumeMountPoints:(id)arg2 error:(id*)arg3;
- (id)_copySystemPluginsWithVolumeMountPoints:(id)arg1 error:(id*)arg2;
- (id)_copyUserAppsForPersona:(id)arg1 dataSeparatedBundleIDs:(id)arg2 volumeMountPoints:(id)arg3 error:(id*)arg4;
- (bool)_isContainerizedAppDomain:(id)arg1;
- (void)_reconcileBooksAndHealthInDisabledDomainsList:(id)arg1;
- (id)_subdomainNamesForAppDomainNames:(id)arg1;
- (void)_syncDisabledDomainsWithAllInstalledAppDomains:(id)arg1 persona:(id)arg2;
- (id)allApps;
- (id)allContainers;
- (id)allDisabledDomainNames;
- (id)allDisabledDomainNamesForPersona:(id)arg1;
- (id)allPlugins;
- (id)allRestrictedDomainNames;
- (id)allRestrictedDomainNamesForPersona:(id)arg1;
- (id)allSystemContainers;
- (id)appWithIdentifier:(id)arg1;
- (id)containerWithIdentifier:(id)arg1;
- (id)createSafeHarborForContainer:(id)arg1 withPersona:(id)arg2 error:(id*)arg3;
- (id)createSafeHarborForContainer:(id)arg1 withPersona:(id)arg2 usingIntermediateRestoreDir:(bool)arg3 error:(id*)arg4;
- (id)initWithSettingsContext:(id)arg1;
- (bool)isDomainNameEnabled:(id)arg1 forPersona:(id)arg2;
- (bool)loadAppsWithPersona:(id)arg1 safeHarbors:(bool)arg2 dataSeparatedBundleIDs:(id)arg3 error:(id*)arg4;
- (bool)loadAppsWithPersona:(id)arg1 safeHarbors:(bool)arg2 error:(id*)arg3;
- (bool)moveAppDataToSafeHarborForContainer:(id)arg1 withPersona:(id)arg2 usingIntermediateRestoreDir:(bool)arg3 withError:(id*)arg4;
- (bool)moveAppDataToSafeHarborForContainer:(id)arg1 withPersona:(id)arg2 withError:(id*)arg3;
- (void)removeAllDisabledDomainNamesForPersona:(id)arg1;
- (void)removeOldSafeHarbors;
- (void)removeStaleStateForUninstalledAppsForPersona:(id)arg1;
- (void)setEnabled:(bool)arg1 forDomainName:(id)arg2 persona:(id)arg3;
- (id)systemDataContainerWithIdentifier:(id)arg1;
- (id)systemSharedContainerWithIdentifier:(id)arg1;

@end
