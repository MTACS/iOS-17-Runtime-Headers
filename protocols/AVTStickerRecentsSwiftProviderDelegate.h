
@protocol AVTStickerRecentsSwiftProviderDelegate <NSObject>

@required

- (void)avtStickerRecentRenderedWithIdentifier:(NSUUID *)arg1 localizedDescription:(NSString *)arg2 image:(UIImage *)arg3 url:(NSURL *)arg4 avatarRecordIdentifier:(NSString *)arg5 stickerConfigurationIdentifier:(NSString *)arg6;
- (void)avtStickerRecentStoreDidChange;

@end
