
@protocol AVTUIImageRenderServiceProtocol

@required

- (void)generateAndCacheImageForAvatarRecord:(void *)arg1 scope:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: AVTAvatarRecord *, AVTRenderingScope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (void)requestAnimojiStickerImageForAvatarRecord:(void *)arg1 withStickerPackName:(void *)arg2 stickerConfigurationName:(void *)arg3 resource:(void *)arg4 withReply:(void *)arg5; // needs 5 arg types, found 10: AVTAvatarPuppetRecord *, NSString *, NSString *, AVTStickerResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVTStickerResource *, void*
- (void)requestImageForAvatar:(void *)arg1 scope:(void *)arg2 withModifications:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 9: AVTAvatar *, AVTRenderingScope *, AVTSCNNodeModifications *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)requestImageForAvatar:(void *)arg1 scope:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: AVTAvatar *, AVTRenderingScope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)requestStickerImageForAvatarRecord:(void *)arg1 withStickerPackName:(void *)arg2 stickerConfigurationName:(void *)arg3 resource:(void *)arg4 withReply:(void *)arg5; // needs 5 arg types, found 10: AVTAvatarRecord *, NSString *, NSString *, AVTStickerResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVTStickerResource *, void*

@end
