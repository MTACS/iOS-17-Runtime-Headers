
@interface IMTransferServicesController : NSObject {
    IMMultiQueue * _queue;
}

@property (nonatomic, retain) IMMultiQueue *queue;

// Image: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices

+ (id)sharedInstance;

- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 sourceAppID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 retries:(int)arg9 fileSize:(unsigned long long)arg10 progressBlock:(id /* block */)arg11 completionBlock:(id /* block */)arg12;
- (void)_removeFileOrWarn:(id)arg1;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 sourceAppID:(id)arg5 encryptFile:(bool)arg6 retries:(int)arg7 progressBlock:(id /* block */)arg8 completionBlock:(id /* block */)arg9;
- (void)cancelSendTransferID:(id)arg1;
- (void)deleteAllPersonalNicknamesWithCompletion:(id /* block */)arg1;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 wallpaperDataTag:(id)arg3 wallpaperLowResDataTag:(id)arg4 wallpaperMetadataTag:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 wallpaperDataTag:(id)arg3 wallpaperLowResDataTag:(id)arg4 wallpaperMetadataTag:(id)arg5 isKnownSender:(bool)arg6 completionBlock:(id /* block */)arg7;
- (id)init;
- (void)preWarmMMCSForOwnerID:(id)arg1;
- (id)queue;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(id /* block */)arg9 completionBlock:(id /* block */)arg10;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 sourceAppID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 fileSize:(unsigned long long)arg9 progressBlock:(id /* block */)arg10 completionBlock:(id /* block */)arg11;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(bool)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(bool)arg5 progressBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 sourceAppID:(id)arg5 encryptFile:(bool)arg6 progressBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlockWithWallpaperTags:(id /* block */)arg3;
- (void)setQueue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (bool)_markSensitiveDefault;
- (bool)failTransfersOnPreviewGenerationFailure;
- (void)generatePreviewForTransfer:(id)arg1 attachmentPath:(id)arg2 balloonBundleID:(id)arg3 senderContext:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)receiveFileTransfer:(id)arg1 transferGUID:(id)arg2 topic:(id)arg3 path:(id)arg4 requestURLString:(id)arg5 ownerID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 fileSize:(unsigned long long)arg9 generatePreview:(bool)arg10 balloonBundleID:(id)arg11 senderContext:(id)arg12 progressBlock:(id /* block */)arg13 completionBlock:(id /* block */)arg14;
- (id)transferServicesController;

@end
