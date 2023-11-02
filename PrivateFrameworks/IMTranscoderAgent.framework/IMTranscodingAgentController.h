
@interface IMTranscodingAgentController : NSObject {
    NSArray * _fallbackTranscoders;
    NSObject<OS_dispatch_queue> * _previewGenerationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _transcoders;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_findTranscoderForUTI:(id)arg1;
- (void)_registerTranscoders;
- (void)decodeiMessageAppPayload:(id)arg1 senderContext:(id)arg2 bundleID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)generatePreview:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 balloonBundleID:(id)arg4 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg5 completionBlock:(id /* block */)arg6;
- (void)generatePreviewMetadata:(id)arg1 destinationURL:(id)arg2 senderContext:(id)arg3 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 completionBlock:(id /* block */)arg5;
- (void)generateSafeRender:(id)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 completionBlock:(id /* block */)arg3;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 senderContext:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (bool)shouldProcessFileTransfer:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 target:(long long)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 commonCapabilities:(id)arg7;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 isSticker:(bool)arg3 allowUnfilteredUTIs:(id)arg4 target:(long long)arg5 sizes:(id)arg6 commonCapabilities:(id)arg7 maxDimension:(unsigned long long)arg8 transcoderUserInfo:(id)arg9 fallback:(bool)arg10 representations:(long long)arg11 isLQMEnabled:(bool)arg12 completionBlock:(id /* block */)arg13;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 fallBack:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)transcribeAudioForAudioTransferURL:(id)arg1 withCompletion:(id /* block */)arg2;

@end
