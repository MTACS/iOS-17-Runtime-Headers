
@interface IMTransferAgentController : NSObject {
    MMCSController * _controller;
}

@property (nonatomic, retain) MMCSController *controller;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_defaultMMCSAllowlist;
- (bool)_isAllowlistedURL:(id)arg1;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(bool)arg7 fileSize:(unsigned long long)arg8 sourceAppID:(id)arg9 progressBlock:(id /* block */)arg10 completionBlock:(id /* block */)arg11;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 sourceAppID:(id)arg4 retryAttemptCount:(unsigned long long)arg5 userInfo:(id)arg6 progressBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (bool)_shouldRetryUploadGivenMMCSError:(id)arg1 retryAttemptCount:(unsigned long long)arg2;
- (void)cancelSendTransferID:(id)arg1;
- (id)controller;
- (void)dealloc;
- (void)ensureSafeAttachment:(id)arg1 topic:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 decryptionKey:(id)arg8 sourceAppID:(id)arg9 progressBlock:(id /* block */)arg10 completionBlock:(id /* block */)arg11;
- (void)sendFilePath:(id)arg1 encrypt:(bool)arg2 topic:(id)arg3 transferID:(id)arg4 sourceAppID:(id)arg5 userInfo:(id)arg6 progressBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (void)setController:(id)arg1;
- (void)warm;

@end
