
@interface CNDonationMapper : NSObject <CNDataMapper> {
    CNDonationStore * _donationStore;
    CNContactsEnvironment * _environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNDonationStore *donationStore;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *legacyTetheredSyncComputerAnchor;
@property (nonatomic, retain) NSString *legacyTetheredSyncDeviceAnchor;
@property (nonatomic, readonly) bool shouldCaptureMetricsForQueries;
@property (readonly) bool shouldLogContactsAccess;
@property (nonatomic, readonly) bool shouldLogPrivacyAccountingAccessEvents;
@property (readonly) Class superclass;

+ (id)log;
+ (id)mapperIdentifier;

- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id*)arg2;
- (id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (id)donationStore;
- (id)environment;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 authorizationContext:(id)arg3 error:(id*)arg4;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDonationStore:(id)arg1 environment:(id)arg2;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)policyWithDescription:(id)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)shouldLogContactsAccess;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;

@end
