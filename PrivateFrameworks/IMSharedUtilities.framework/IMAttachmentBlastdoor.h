
@interface IMAttachmentBlastdoor : NSObject

+ (id)blastdoorInterfaceForSenderContext:(id)arg1;
+ (void)defuseBalloonPluginPayloadData:(id)arg1 senderContext:(id)arg2 withBundleIdentifier:(id)arg3 completionBlock:(id /* block */)arg4;
+ (void)generateAnimatedImagePreview:(id)arg1 senderContext:(id)arg2 maxPixelDimension:(double)arg3 index:(long long)arg4 maxCount:(long long)arg5 withCompletionBlock:(id /* block */)arg6;
+ (void)generateAudioPreview:(id)arg1 senderContext:(id)arg2 withCompletionBlock:(id /* block */)arg3;
+ (id)generateImagePreviewForFileURL:(id)arg1 senderContext:(id)arg2 maxPixelDimension:(float)arg3 scale:(float)arg4 error:(id*)arg5;
+ (void)generateMoviePreview:(id)arg1 senderContext:(id)arg2 maxPxWidth:(double)arg3 minThumbnailPxSize:(struct CGSize { double x1; double x2; })arg4 scale:(double)arg5 withCompletionBlock:(id /* block */)arg6;
+ (void)generateNickname:(id)arg1 senderContext:(id)arg2 forRecordID:(id)arg3 wallpaperDataTag:(id)arg4 wallpaperLowResDataTag:(id)arg5 wallpaperMetadataTag:(id)arg6 withKey:(id)arg7 completionBlock:(id /* block */)arg8;
+ (void)generatePassPreview:(id)arg1 senderContext:(id)arg2 withCompletionBlock:(id /* block */)arg3;
+ (void)generatePreview:(id)arg1 senderContext:(id)arg2 maxPxWidth:(double)arg3 scale:(double)arg4 withCompletionBlock:(id /* block */)arg5;
+ (void)generateWorkoutPreview:(id)arg1 senderContext:(id)arg2 maxPxWidth:(double)arg3 scale:(double)arg4 withCompletionBlock:(id /* block */)arg5;
+ (void)getMetadataForAnimatedImage:(id)arg1 senderContext:(id)arg2 maxCount:(long long)arg3 withCompletionBlock:(id /* block */)arg4;
+ (id)logger;
+ (void)sendBalloonPluginPayloadData:(id)arg1 senderContext:(id)arg2 withBundleIdentifier:(id)arg3 completionBlock:(id /* block */)arg4;
+ (void)sendData:(id)arg1 senderContext:(id)arg2 forPreviewType:(unsigned char)arg3 withCompletionBlock:(id /* block */)arg4;
+ (bool)supportsFeature:(id)arg1;

@end
