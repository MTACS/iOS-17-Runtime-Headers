
@interface ICLibraryAuthServiceBulkClientTokenRequest : ICRequestOperation {
    NSSet * _accountDSIDs;
    ICLibraryAuthServiceBulkClientTokenResponse * _response;
    ICStoreRequestContext * _storeRequestContext;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1 accountDSIDs:(id)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
