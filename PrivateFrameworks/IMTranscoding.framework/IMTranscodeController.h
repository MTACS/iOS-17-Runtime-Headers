
@interface IMTranscodeController : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_connect;
- (void)_decodeiMessageAppPayload:(id)arg1 senderContext:(id)arg2 bundleID:(id)arg3 retries:(unsigned long long)arg4 completionBlock:(id /* block */)arg5 blockUntilReply:(bool)arg6;
- (void)_disconnected;
- (void)_generateMetadata:(id)arg1 metadataURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 retries:(unsigned long long)arg5 completionBlock:(id /* block */)arg6 blockUntilReply:(bool)arg7;
- (void)_generatePreview:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 retries:(unsigned long long)arg5 balloonBundleID:(id)arg6 completionBlock:(id /* block */)arg7 blockUntilReply:(bool)arg8;
- (void)_generateSafeRender:(id)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 retries:(int)arg3 completionBlock:(id /* block */)arg4;
- (void)_insertSandboxExtensionIntoXPCMessage:(id)arg1 withKey:(id)arg2 forFileURL:(id)arg3 readOnly:(bool)arg4;
- (void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 isSticker:(bool)arg3 allowUnfilteredUTIs:(id)arg4 target:(long long)arg5 sizes:(id)arg6 commonCapabilities:(id)arg7 maxDimension:(unsigned long long)arg8 transcoderUserInfo:(id)arg9 representations:(long long)arg10 fallBack:(bool)arg11 retries:(int)arg12 isLQMEnabled:(bool)arg13 completionBlock:(id /* block */)arg14;
- (void)_transcodeFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 retries:(unsigned long long)arg4 fallBack:(bool)arg5 completionBlock:(id /* block */)arg6;
- (id)connectionQueue;
- (void)decodeiMessageAppPayload:(id)arg1 senderContext:(id)arg2 bundleID:(id)arg3 completionBlock:(id /* block */)arg4 blockUntilReply:(bool)arg5;
- (void)generateMetadata:(id)arg1 metadataURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 completionBlock:(id /* block */)arg5;
- (void)generateMetadata:(id)arg1 metadataURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 completionBlock:(id /* block */)arg5 blockUntilReply:(bool)arg6;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 balloonBundleID:(id)arg5 completionBlock:(id /* block */)arg6 blockUntilReply:(bool)arg7;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 completionBlock:(id /* block */)arg5;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 completionBlock:(id /* block */)arg5 blockUntilReply:(bool)arg6;
- (void)generateSafeRender:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)generateSafeRender:(id)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 completionBlock:(id /* block */)arg3;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 senderContext:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (void)setConnectionQueue:(id)arg1;
- (void)transcodeFallbackFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 isLQMEnabled:(bool)arg10 completionBlock:(id /* block */)arg11;
- (void)transcodeFallbackFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 isSticker:(bool)arg3 allowUnfilteredUTIs:(id)arg4 target:(long long)arg5 sizes:(id)arg6 commonCapabilities:(id)arg7 maxDimension:(unsigned long long)arg8 transcoderUserInfo:(id)arg9 representations:(long long)arg10 isLQMEnabled:(bool)arg11 completionBlock:(id /* block */)arg12;
- (void)transcodeLocalTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)transcribeAudioForAudioTransferURL:(id)arg1 withCompletion:(id /* block */)arg2;

@end
