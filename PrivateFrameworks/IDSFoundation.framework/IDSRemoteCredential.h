
@interface IDSRemoteCredential : NSObject {
    NSObject<OS_xpc_object> * _connection;
    int  _retries;
    bool  _wantsRetries;
}

@property (nonatomic) bool wantsRetries;

- (void).cxx_destruct;
- (bool)_connect;
- (bool)_disconnect;
- (void)_disconnected;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id /* block */)arg1;
- (void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(bool)arg3 allowQuery:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 queueOneIdentifier:(id)arg3 allowCloudFallback:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id /* block */)arg1;
- (void)setWantsRetries:(bool)arg1;
- (bool)wantsRetries;

@end
