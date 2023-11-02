
@interface CNiOSAddressBookDataMapper : NSObject <CNiOSAddressBookDataMapper> {
    CNiOSAddressBook * _addressBook;
    CNAuthorization * _authorization;
    long long  _contactIdentifierAuditMode;
    CNContactsEnvironment * _environment;
    <CNContactsLogger> * _logger;
    CNManagedAccountsCache * _managedAccountsCache;
    CNManagedConfiguration * _managedConfiguration;
    bool  _shouldLogDeleteDetails;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *legacyTetheredSyncComputerAnchor;
@property (nonatomic, retain) NSString *legacyTetheredSyncDeviceAnchor;
@property (nonatomic, readonly) bool shouldCaptureMetricsForQueries;
@property (readonly) bool shouldLogContactsAccess;
@property (nonatomic, readonly) bool shouldLogPrivacyAccountingAccessEvents;
@property (readonly) Class superclass;

+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;
+ (id)encodedPeopleFetcherForForFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 addressBookCompletionHandler:(id /* block */)arg4 cursorCompletionHandler:(id /* block */)arg5 environment:(id)arg6 identifierAuditMode:(long long)arg7;
+ (void)initialize;

- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)currentHistoryAnchor;
- (id)currentHistoryToken;
- (id)defaultContainerIdentifier;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)encodedContactsCursorForFetchRequest:(id)arg1 cursorCleanupBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
- (bool)fetchContactsForFetchRequest:(id)arg1 error:(id*)arg2 batchHandler:(id /* block */)arg3;
- (bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(id /* block */)arg4;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)groupsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)hasGroups;
- (bool)hasMultipleGroupsOrAccounts;
- (id)identifierWithError:(id*)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 addressBook:(id)arg2;
- (id)legacyTetheredSyncComputerAnchor;
- (id)legacyTetheredSyncDeviceAnchor;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)meContactIdentifiers:(id*)arg1;
- (bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id*)arg4;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)policyWithDescription:(id)arg1 error:(id*)arg2;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (bool)resetSortDataIfNeededWithError:(id*)arg1;
- (int)saveSequenceCount;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (bool)setDefaultAccountIdentifier:(id)arg1 error:(id*)arg2;
- (void)setLegacyTetheredSyncComputerAnchor:(id)arg1;
- (void)setLegacyTetheredSyncDeviceAnchor:(id)arg1;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (bool)shouldCaptureMetricsForQueries;
- (bool)shouldLogContactsAccess;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactCountWithError:(id*)arg1;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end
