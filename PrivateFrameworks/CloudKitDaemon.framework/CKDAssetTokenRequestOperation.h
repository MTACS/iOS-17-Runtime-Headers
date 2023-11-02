
@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation {
    CKDAssetTokenRequest * _assetTokenRequest;
}

@property (nonatomic, retain) CKDAssetTokenRequest *assetTokenRequest;

- (void).cxx_destruct;
- (id)assetTokenRequest;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (void)setAssetTokenRequest:(id)arg1;

@end
