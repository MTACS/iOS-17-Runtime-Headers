
@interface ASTMaterializedConnectionManager : NSObject <ASTConnectionManager, ASTConnectionStatusDelegate> {
    <ASTConnectionManagerDelegate> * _delegate;
    ASTIdentity * _identity;
    ASTNetworking * _networking;
    NSString * _sessionId;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASTIdentity *identity;
@property (nonatomic, retain) ASTNetworking *networking;
@property (nonatomic, retain) NSString *sessionId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelAllTestResults;
- (void)connection:(id)arg1 connectionStateChanged:(long long)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpected:(long long)arg4;
- (void)dealloc;
- (id)delegate;
- (void)downloadAsset:(id)arg1 destinationFileHandle:(id)arg2 allowsCellularAccess:(bool)arg3 completion:(id /* block */)arg4;
- (id)identity;
- (id)init;
- (id)initWithSOCKSProxyServer:(id)arg1 port:(id)arg2;
- (id)networking;
- (bool)postAuthInfo:(id)arg1 allowsCellularAccess:(bool)arg2;
- (id)postEnrollAllowingCellularAccess:(bool)arg1;
- (bool)postProfile:(id)arg1 allowsCellularAccess:(bool)arg2;
- (id)postRequest:(id)arg1 allowsCellularAccess:(bool)arg2;
- (void)postSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 allowsCellularAccess:(bool)arg6 completion:(id /* block */)arg7;
- (void)postSessionExistsForIdentities:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 allowsCellularAccess:(bool)arg4 completion:(id /* block */)arg5;
- (void)postTestResult:(id)arg1 allowsCellularAccess:(bool)arg2 completion:(id /* block */)arg3;
- (id)sessionId;
- (void)setDelegate:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setNetworking:(id)arg1;
- (void)setSessionId:(id)arg1;

@end
