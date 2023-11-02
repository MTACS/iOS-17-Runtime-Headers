
@interface IMMessagesBlastDoorInterfaceInternal : NSObject {
    void bd;
    void type;
}

+ (bool)supportsFeature:(id)arg1;

- (void).cxx_destruct;
- (void)decontaminateTopLevelDictionary:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)defuseBalloonPluginPayload:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3;
- (void)defuseBalloonPluginPayload:(id)arg1 withIdentifier:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)defuseCollaborationClearNoticePayload:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)defuseCollaborationNoticeActionDictionary:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)defuseCollaborationNoticePayload:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)defuseData:(id)arg1 forPreviewType:(unsigned char)arg2 resultHandler:(id /* block */)arg3;
- (void)defuseNicknameDictionary:(id)arg1 withKey:(id)arg2 recordTag:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)defuseNicknameDictionary:(id)arg1 withKey:(id)arg2 recordTag:(id)arg3 wallpaperDataTag:(id)arg4 wallpaperLowResDataTag:(id)arg5 wallpaperMetadataTag:(id)arg6 resultHandler:(id /* block */)arg7;
- (id)defuseSMSDictionary:(id)arg1 error:(id*)arg2;
- (void)defuseSMSDictionary:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)defuseTopLevelDictionary:(id)arg1 error:(id*)arg2;
- (void)defuseTopLevelDictionary:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)generateImagePreviewForFileURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 error:(id*)arg4;
- (void)generateMetadataforAttachmentWithfileURL:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)generateMovieFramesForAttachmentWithFileURL:(id)arg1 targetPixelWidth:(long long)arg2 targetPixelHeight:(long long)arg3 frameLimit:(long long)arg4 uniformSampling:(bool)arg5 framesPerSync:(long long)arg6 appliesPreferredTrackTransform:(bool)arg7 resultHandler:(id /* block */)arg8;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)arg1 maxPixelDimension:(float)arg2 minThumbnailPxSize:(struct CGSize { double x1; double x2; })arg3 scale:(float)arg4 frameInterval:(long long)arg5 resultHandler:(id /* block */)arg6;
- (void)generateMoviePreviewForAttachmentWithFileURL:(id)arg1 maxPixelDimension:(float)arg2 minThumbnailPxSize:(struct CGSize { double x1; double x2; })arg3 scale:(float)arg4 resultHandler:(id /* block */)arg5;
- (void)generatePreviewforAnimatedImageWithfileURL:(id)arg1 maxPixelDimension:(float)arg2 index:(long long)arg3 maxCount:(long long)arg4 resultHandler:(id /* block */)arg5;
- (id)generatePreviewforAttachmentWithfileURL:(id)arg1 error:(id*)arg2;
- (void)generatePreviewforAttachmentWithfileURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 resultHandler:(id /* block */)arg4;
- (void)generatePreviewforAttachmentWithfileURL:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)generatePreviewforAudioMessageWithfileURL:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)generateWorkoutPreviewForAttachmentWithFileURL:(id)arg1 maxPixelDimension:(float)arg2 scale:(float)arg3 resultHandler:(id /* block */)arg4;
- (void)getMetadataforAnimatedImageWithfileURL:(id)arg1 maxCount:(long long)arg2 resultHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithBlastDoorInstanceType:(id)arg1;

@end
