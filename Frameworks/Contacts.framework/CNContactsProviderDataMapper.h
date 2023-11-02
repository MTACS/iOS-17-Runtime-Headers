
@interface CNContactsProviderDataMapper : NSObject <CNiOSAddressBookDataMapper> {
    CNContactsProviderManager * _contactsProviderManager;
    CNiOSAddressBookDataMapper * _dataMapper;
    CNManagedConfiguration * _managedConfiguration;
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

- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2;
- (id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (id)encodedContactsCursorForFetchRequest:(id)arg1 cursorCleanupBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
- (bool)fetchContactsForFetchRequest:(id)arg1 error:(id*)arg2 batchHandler:(id /* block */)arg3;
- (bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(id /* block */)arg4;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 addressBook:(id)arg2;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)policyWithDescription:(id)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)shouldLogContactsAccess;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;

@end
