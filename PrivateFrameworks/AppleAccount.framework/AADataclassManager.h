
@interface AADataclassManager : NSObject {
    ACAccountStore * _store;
}

+ (id)appBundleIdentifierDictionary;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_buildAutoEnableableDataclassesAndActionsForAccount:(id)arg1 dataclassesForEnablement:(id)arg2;
- (id)_filteredDataclassesForAccountClass:(id)arg1;
- (bool)_hideDataclassWhenAppRemoved:(id)arg1;
- (bool)_isRestrictedForDataclass:(id)arg1 account:(id)arg2;
- (id)_nonVisibleServiceDataclass;
- (bool)_shouldProvisionNotesForAccount:(id)arg1;
- (bool)_shouldProvisionRemindersForAccount:(id)arg1;
- (bool)_shouldShowDataclassWhenAppIsRemoved:(id)arg1;
- (id)_userVisibleDataclasses;
- (id)appBundleIdentifierForDataclass:(id)arg1;
- (id)blackListedMacOSDataclasses;
- (bool)canAutoEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)arg1 fromAccount:(id)arg2 completion:(id /* block */)arg3;
- (id)filterDataclassesForPossibleAutoEnablementForAccount:(id)arg1;
- (id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (bool)isDataclassActionSafeForAutoEnablement:(id)arg1;
- (bool)isSystemAppMCRestrictedOrRemovedForDataclass:(id)arg1 forAccount:(id)arg2;
- (bool)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1;
- (bool)policyRestrictsDataclass:(id)arg1;
- (bool)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2;
- (id)whitelistedDataclassesForAppleAccountClassBasic;
- (id)whitelistedDataclassesForAppleAccountClassFull;

@end
