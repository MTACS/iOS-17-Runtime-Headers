
@interface CNNicknameProviderTestDouble : NSObject <CNNicknameProvider> {
    NSMutableDictionary * _contactForNickname;
    NSMutableDictionary * _filePathsForContacts;
}

@property (nonatomic, retain) NSMutableDictionary *contactForNickname;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *filePathsForContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)accountCanCreateSNaP;
- (void)addFilePath:(id)arg1 forContact:(id)arg2;
- (id)avatarImageFileURLForNickname:(id)arg1;
- (id)contactForNickname;
- (void)fetchPersonalNicknameAsContactWithCompletion:(id /* block */)arg1;
- (id)filePathsForContacts;
- (id)init;
- (id)initWithFilePathsForContacts:(id)arg1;
- (bool)isNicknameSharingEnabled;
- (id)nicknameForContact:(id)arg1;
- (void)setContactForNickname:(id)arg1;
- (void)setFilePathsForContacts:(id)arg1;
- (void)setPersonalNicknameWithContact:(id)arg1;
- (void)setPersonalNicknameWithSharingResult:(id)arg1;
- (void)setSharingAudience:(unsigned long long)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (id)sharedAvatarImageDataForContact:(id)arg1;
- (id)sharedWallpaperForNickname:(id)arg1;
- (id)sharedWatchWallpaperImageDataForNickname:(id)arg1;
- (unsigned long long)sharingAudience;
- (id)wallpaperFileURLForNickname:(id)arg1;
- (id)watchWallpaperImageDataFileURLForNickname:(id)arg1;

@end
