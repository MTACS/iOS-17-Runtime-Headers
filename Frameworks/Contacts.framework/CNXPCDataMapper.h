
@interface CNXPCDataMapper : NSObject <CNDataMapper> {
    CNAuthorization * _authorization;
    NSXPCConnection * _connection;
    <CNKeyboardStateMonitor> * _keyboardStateMonitor;
    <CNContactsLogger> * _logger;
    <CNXPCDataMapperService> * _serviceProxy;
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
+ (id)serviceProtocolInterface;

- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)currentHistoryAnchor;
- (id)currentHistoryToken;
- (void)dealloc;
- (id)defaultContainerIdentifier;
- (bool)executeChangeHistoryClearRequest:(id)arg1 error:(id*)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
- (id)favoritesEntryDictionariesAtPath:(id)arg1 error:(id*)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)identifierWithError:(id*)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)policyWithDescription:(id)arg1 error:(id*)arg2;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)requestExtensionCommand:(id)arg1 error:(id*)arg2;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (bool)shouldLogContactsAccess;
- (bool)shouldLogPrivacyAccountingAccessEvents;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactCountWithError:(id*)arg1;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id*)arg3;
- (id)userActivityUserInfoForContact:(id)arg1;
- (bool)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 error:(id*)arg3;

@end
