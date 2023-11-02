
@interface CKDiscoverUserInfosOperation : CKOperation {
    id /* block */  _discoverUserInfosCompletionBlock;
    NSArray * _emailAddresses;
    NSArray * _userRecordIDs;
}

@property (nonatomic, copy) id /* block */ discoverUserInfosCompletionBlock;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, copy) NSArray *userRecordIDs;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id /* block */)discoverUserInfosCompletionBlock;
- (id)emailAddresses;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (void)setDiscoverUserInfosCompletionBlock:(id /* block */)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setUserRecordIDs:(id)arg1;
- (id)userRecordIDs;

@end
