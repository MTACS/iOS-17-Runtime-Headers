
@interface CKDProcessScopedClientProxy : NSObject {
    CKDXPCConnection * _clientConnection;
    CKEntitlements * _clientEntitlements;
    unsigned int  _clientSDKVersion;
    NSDate * _connectionDate;
    NSDictionary * _connectionEntitlements;
    long long  _hasValidatedEntitlementsTernary;
    bool  _isClientMainBundleAppleExecutable;
    int  _pid;
    NSString * _procName;
    NSString * _processBinaryName;
    <CKXPCProcessScopedClient> * _processScopedClientProxyCreator;
    bool  _sandboxed;
}

@property (nonatomic) CKDXPCConnection *clientConnection;
@property (nonatomic, readonly) CKEntitlements *clientEntitlements;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, retain) NSDate *connectionDate;
@property (nonatomic, retain) NSDictionary *connectionEntitlements;
@property (nonatomic) long long hasValidatedEntitlementsTernary;
@property (nonatomic) bool isClientMainBundleAppleExecutable;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *procName;
@property (nonatomic, readonly) NSString *processBinaryName;
@property (retain) <CKXPCProcessScopedClient> *processScopedClientProxyCreator;
@property (getter=isSandboxed, readonly) bool sandboxed;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_getProcessScopedClientProxyCreatorSynchronous:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)canOpenFileAtURL:(id)arg1;
- (id)clientConnection;
- (id)clientEntitlements;
- (unsigned int)clientSDKVersion;
- (id)connectionDate;
- (id)connectionEntitlements;
- (id)description;
- (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3;
- (void)getProcessScopedClientProxySynchronous:(bool)arg1 errorHandler:(id /* block */)arg2 clientProxyHandler:(id /* block */)arg3;
- (void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2;
- (bool)hasValidatedEntitlements;
- (long long)hasValidatedEntitlementsTernary;
- (id)initWithClientConnection:(id)arg1;
- (bool)isClientMainBundleAppleExecutable;
- (bool)isSandboxed;
- (id)issueSandboxExtensionForItem:(id)arg1 error:(id*)arg2;
- (void)noteSystemIsAvailable;
- (int)pid;
- (id)procName;
- (id)processBinaryName;
- (bool)processIsAttached;
- (id)processScopedClientProxyCreator;
- (void)setClientConnection:(id)arg1;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setConnectionDate:(id)arg1;
- (void)setConnectionEntitlements:(id)arg1;
- (void)setHasValidatedEntitlementsTernary:(long long)arg1;
- (void)setIsClientMainBundleAppleExecutable:(bool)arg1;
- (void)setProcessScopedClientProxyCreator:(id)arg1;
- (void)tearDown;

@end
