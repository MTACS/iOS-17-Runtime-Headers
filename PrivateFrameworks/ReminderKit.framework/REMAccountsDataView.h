
@interface REMAccountsDataView : NSObject {
    REMStore * _store;
}

@property (nonatomic, readonly) REMStore *store;

- (void).cxx_destruct;
- (id)accountsFromStorages:(id)arg1;
- (id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchAccountWithObjectID:(id)arg1 error:(id*)arg2;
- (id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)fetchAccountsWithObjectIDs:(id)arg1 error:(id*)arg2;
- (id)fetchActiveCloudKitAccountObjectIDsWithFetchOption:(long long)arg1 error:(id*)arg2;
- (id)fetchAllAccountsForAccountManagementWithError:(id*)arg1;
- (id)fetchAllAccountsForDumpingWithError:(id*)arg1;
- (id)fetchAllAccountsWithError:(id*)arg1;
- (id)fetchPrimaryActiveCloudKitAccountREMObjectIDWithError:(id*)arg1;
- (id)fetchPrimaryActiveCloudKitAccountWithError:(id*)arg1;
- (id)initWithStore:(id)arg1;
- (id)store;

@end
