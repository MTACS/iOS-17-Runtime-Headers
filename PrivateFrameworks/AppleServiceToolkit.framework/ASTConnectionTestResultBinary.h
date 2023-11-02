
@interface ASTConnectionTestResultBinary : ASTMaterializedConnection <ASTTestResultHandling, ASTUploadConnection> {
    NSString * _dataId;
    NSURL * _fileSteamLocationURL;
    ASTSealableFile * _sealableFile;
    NSNumber * _testId;
}

@property (nonatomic, retain) NSString *dataId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (nonatomic, readonly) NSURL *fileSteamLocationURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic, retain) ASTSealableFile *sealableFile;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *testId;

- (void).cxx_destruct;
- (id)contentType;
- (id)dataId;
- (id)endpoint;
- (id)fileSteamLocationURL;
- (id)initWithSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5;
- (id)sealableFile;
- (void)setDataId:(id)arg1;
- (void)setSealableFile:(id)arg1;
- (id)testId;

@end
