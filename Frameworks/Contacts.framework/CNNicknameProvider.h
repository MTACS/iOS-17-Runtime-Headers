
@interface CNNicknameProvider : NSObject <CNNicknameProvider, IMNicknameListener> {
    IMNicknameProvider * _imNicknameProvider;
    IMMeCardSharingStateController * _sharingStateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IMNicknameProvider *imNicknameProvider;
@property (nonatomic, retain) IMMeCardSharingStateController *sharingStateController;
@property (readonly) Class superclass;

+ (id)defaultProvider;
+ (id)log;
+ (id)makeDefaultProvider;

- (void).cxx_destruct;
- (id)avatarImageFileURLForContact:(id)arg1;
- (id)avatarImageFileURLForNickname:(id)arg1;
- (id)contactFromNickname:(id)arg1;
- (void)fetchPersonalNicknameAsContactWithCompletion:(id /* block */)arg1;
- (id)imNicknameProvider;
- (id)init;
- (id)initWithIMNicknameProvider:(id)arg1;
- (bool)isNicknameSharingEnabled;
- (id)nicknameAsContactForContact:(id)arg1;
- (id)nicknameForContact:(id)arg1;
- (void)nicknameStoreDidChange:(id)arg1;
- (void)setImNicknameProvider:(id)arg1;
- (void)setPersonalNicknameWithContact:(id)arg1;
- (void)setPersonalNicknameWithSharingResult:(id)arg1;
- (void)setSharingAudience:(unsigned long long)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (void)setSharingStateController:(id)arg1;
- (id)sharedAvatarImageDataForContact:(id)arg1;
- (id)sharedWallpaperForNickname:(id)arg1;
- (id)sharedWatchWallpaperImageDataForNickname:(id)arg1;
- (unsigned long long)sharingAudience;
- (id)sharingStateController;
- (id)wallpaperFileURLForContact:(id)arg1;
- (id)wallpaperFileURLForNickname:(id)arg1;
- (id)watchWallpaperImageDataFileURLForContact:(id)arg1;
- (id)watchWallpaperImageDataFileURLForNickname:(id)arg1;

@end
