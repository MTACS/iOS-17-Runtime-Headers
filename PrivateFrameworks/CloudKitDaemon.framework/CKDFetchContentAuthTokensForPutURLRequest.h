
@interface CKDFetchContentAuthTokensForPutURLRequest : CKDURLRequest {
    CKDAssetTokenRequest * _assetTokenRequest;
    NSDictionary * _headers;
    NSMapTable * _transactionStateByRequestIDs;
    bool  _useEncryption;
}

@property (nonatomic, retain) CKDAssetTokenRequest *assetTokenRequest;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic, retain) NSMapTable *transactionStateByRequestIDs;
@property (nonatomic) bool useEncryption;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)assetTokenRequest;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)headers;
- (id)initWithOperation:(id)arg1 assetTokenRequest:(id)arg2 headers:(id)arg3;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setAssetTokenRequest:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setTransactionStateByRequestIDs:(id)arg1;
- (void)setUseEncryption:(bool)arg1;
- (id)transactionStateByRequestIDs;
- (bool)useEncryption;

@end
