
@interface ASTConnectionAsset : ASTMaterializedConnection <ASTDownloadConnection> {
    NSString * _assetName;
    NSFileHandle * _destinationFileHandle;
    id /* block */  _didDownloadFile;
}

@property (nonatomic, retain) NSString *assetName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileHandle *destinationFileHandle;
@property (nonatomic, copy) id /* block */ didDownloadFile;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accept;
- (id)assetName;
- (id)destinationFileHandle;
- (id /* block */)didDownloadFile;
- (id)endpoint;
- (id)initWithAssetName:(id)arg1 destinationFileHandle:(id)arg2;
- (id)method;
- (void)setAssetName:(id)arg1;
- (void)setDidDownloadFile:(id /* block */)arg1;

@end
