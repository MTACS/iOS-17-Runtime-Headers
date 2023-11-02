
@protocol CNNicknameProvider <NSObject>

@required

- (NSURL *)avatarImageFileURLForNickname:(IMNickname *)arg1;
- (void)fetchPersonalNicknameAsContactWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CNContact *, void*
- (bool)isNicknameSharingEnabled;
- (CNContact *)nicknameAsContactForContact:(CNContact *)arg1;
- (IMNickname *)nicknameForContact:(CNContact *)arg1;
- (void)setPersonalNicknameWithContact:(CNContact *)arg1;
- (void)setPersonalNicknameWithSharingResult:(id <IMCNMeCardSharingResult>)arg1;
- (void)setSharingAudience:(unsigned long long)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (NSData *)sharedAvatarImageDataForContact:(CNContact *)arg1;
- (CNWallpaper *)sharedWallpaperForNickname:(IMNickname *)arg1;
- (NSData *)sharedWatchWallpaperImageDataForNickname:(IMNickname *)arg1;
- (unsigned long long)sharingAudience;
- (NSURL *)wallpaperFileURLForNickname:(IMNickname *)arg1;
- (NSURL *)watchWallpaperImageDataFileURLForNickname:(IMNickname *)arg1;

@end
