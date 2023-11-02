
@protocol JFXRemoteCommandServerDelegate

@optional

- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddAREffectWithEffectIdentifier:(NSString *)arg2 replayFilename:(NSString *)arg3;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddEffectWithEffectIdentifier:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddEffectWithEffectName:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddPosterWithPosterIdentifier:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddPosterWithPosterName:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddShapeCommandWithIdentifier:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddStickerCommandWithData:(NSData *)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(double)arg4 rotation:(double)arg5;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddStickerCommandWithIdentifier:(NSString *)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(double)arg4 rotation:(double)arg5;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveAddTextCommandWithIdentifier:(NSString *)arg2 string:(NSString *)arg3;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveExportProjectAtIndex:(long long)arg2 asMovie:(bool)arg3;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveExportResponse:(long long)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveGetEffectsRequest:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveGetEffectsResponse:(NSDictionary *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveNewProject:(long long)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveOpenProjectAtIndex:(long long)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveOpenProjectPicker:(long long)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceivePlay:(long long)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceivePlayClipAtIndex:(NSNumber *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveRecordWithDuration:(NSNumber *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(NSArray *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveSetAnimojiCommandWithIdentifier:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveSetAspectRatio:(long long)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveSetFilterCommandWithIdentifier:(NSString *)arg2;
- (void)remoteCommandServer:(JFXRemoteCommandServer *)arg1 didReceiveSetMemojiCommandWithContentsOfFile:(NSString *)arg2;

@end
