
@interface MPServerObjectDatabaseSINFImportRequest : MPServerObjectDatabaseAssetImportRequest {
    NSString * _hashedPersonID;
    id  _requestPayload;
}

- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1 requestPayload:(id)arg2 hashedPersonID:(id)arg3;
- (bool)performWithDatabaseOperations:(id)arg1 error:(id*)arg2;

@end
