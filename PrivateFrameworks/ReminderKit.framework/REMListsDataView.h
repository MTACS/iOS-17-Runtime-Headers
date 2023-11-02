
@interface REMListsDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

+ (id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3;
+ (id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedExternalIdentifiers:(id)arg4;
+ (id)listsFromAccountStorages:(id)arg1 listStorages:(id)arg2 store:(id)arg3 requestedListIDs:(id)arg4;

- (void).cxx_destruct;
- (id)debugFetchPhantomListsWithError:(id*)arg1;
- (id)fetchAllListsWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3;
- (id)fetchDefaultListRequiringCloudKitWithAccountID:(id)arg1 error:(id*)arg2;
- (id)fetchDefaultListWithError:(id*)arg1;
- (id)fetchEligibleDefaultListsWithError:(id*)arg1;
- (id)fetchListIncludingConcealedWithObjectID:(id)arg1 includeMarkedForDeletionOnly:(bool)arg2 error:(id*)arg3;
- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg1 inAccount:(id)arg2 error:(id*)arg3;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListRepresentationOfTemplateWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchListsInAccount:(id)arg1 error:(id*)arg2;
- (id)fetchListsInGroup:(id)arg1 error:(id*)arg2;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id*)arg2;
- (id)fetchListsIncludingSpecialContainersWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchListsWithExternalIdentifiers:(id)arg1 inAccount:(id)arg2 error:(id*)arg3;
- (id)fetchListsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
