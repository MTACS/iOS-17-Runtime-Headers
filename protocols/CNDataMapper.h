
@protocol CNDataMapper <NSObject>

@required

- (NSArray *)accountsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSArray *)authorizedKeysForContactKeys:(NSArray *)arg1 error:(id*)arg2;
- (NSNumber *)contactCountForFetchRequest:(CNContactFetchRequest *)arg1 error:(id*)arg2;
- (CNObservable *)contactObservableForFetchRequest:(CNContactFetchRequest *)arg1;
- (NSArray *)containersMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSString *)defaultContainerIdentifier;
- (bool)executeSaveRequest:(CNSaveRequest *)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(CNSaveRequest *)arg1 response:(id*)arg2 authorizationContext:(CNAuthorizationContext *)arg3 error:(id*)arg4;
- (NSArray *)groupsMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(CNDataMapperConfiguration *)arg1;
- (NSArray *)meContactIdentifiers:(id*)arg1;
- (CNPolicy *)policyForContainerWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (CNPolicy *)policyWithDescription:(CNPolicyDescription *)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (NSArray *)serverSearchContainersMatchingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (bool)shouldLogContactsAccess;
- (NSArray *)subgroupsOfGroupWithIdentifier:(NSString *)arg1 error:(id*)arg2;

@optional

- (CNChangeHistoryResult *)changeHistoryWithFetchRequest:(CNChangeHistoryFetchRequest *)arg1 error:(id*)arg2;
- (NSString *)contactIdentifierWithMatchingDictionary:(NSDictionary *)arg1;
- (CNContact *)contactWithUserActivityUserInfo:(NSDictionary *)arg1 keysToFetch:(NSArray *)arg2;
- (CNResult *)currentHistoryAnchor;
- (NSData *)currentHistoryToken;
- (<CNKeyDescriptor> *)descriptorForRequiredKeysForMatchingDictionary;
- (<CNKeyDescriptor> *)descriptorForRequiredKeysForUserActivityUserInfo;
- (bool)executeChangeHistoryClearRequest:(CNChangeHistoryClearRequest *)arg1 error:(id*)arg2;
- (<CNCancelable> *)executeFetchRequest:(void *)arg1 progressiveResults:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: CNContactFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (NSArray *)favoritesEntryDictionariesAtPath:(NSString *)arg1 error:(id*)arg2;
- (NSArray *)groupsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (bool)hasGroups;
- (bool)hasMultipleGroupsOrAccounts;
- (NSString *)identifierWithError:(id*)arg1;
- (NSString *)legacyTetheredSyncComputerAnchor;
- (NSString *)legacyTetheredSyncDeviceAnchor;
- (NSDictionary *)matchingDictionaryForContact:(CNContact *)arg1;
- (bool)moveContacts:(NSArray *)arg1 fromContainer:(CNContainer *)arg2 toContainer:(CNContainer *)arg3 error:(id*)arg4;
- (bool)registerChangeHistoryClientIdentifier:(NSString *)arg1 forContainerIdentifier:(NSString *)arg2 error:(id*)arg3;
- (id)requestExtensionCommand:(CNExtensionCommand *)arg1 error:(id*)arg2;
- (bool)resetSortDataIfNeededWithError:(id*)arg1;
- (int)saveSequenceCount;
- (NSArray *)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(NSString *)arg1 familyName:(NSString *)arg2 email:(NSString *)arg3 error:(id*)arg4;
- (bool)setDefaultAccountIdentifier:(NSString *)arg1 error:(id*)arg2;
- (void)setLegacyTetheredSyncComputerAnchor:(NSString *)arg1;
- (void)setLegacyTetheredSyncDeviceAnchor:(NSString *)arg1;
- (bool)setMeContact:(CNContact *)arg1 error:(id*)arg2;
- (bool)setMeContact:(CNContact *)arg1 forContainer:(CNContainer *)arg2 error:(id*)arg3;
- (void)setNotificationSource:(id)arg1;
- (bool)shouldCaptureMetricsForQueries;
- (bool)shouldLogPrivacyAccountingAccessEvents;
- (NSNumber *)unifiedContactCountWithError:(id*)arg1;
- (bool)unregisterChangeHistoryClientIdentifier:(NSString *)arg1 forContainerIdentifier:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)usedLabelsForPropertyWithKey:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)userActivityUserInfoForContact:(CNContact *)arg1;
- (bool)writeFavoritesPropertyListData:(NSData *)arg1 toPath:(NSString *)arg2 error:(id*)arg3;

@end
