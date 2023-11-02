
@interface ConversationKit.PersonalNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider> {
    void imageData;
    void nameString;
    void wallpaperFilePath;
}

- (void).cxx_destruct;
- (void)generateAvatarImageOfSize:(struct CGSize { double x1; double x2; })arg1 imageHandler:(id /* block */)arg2;
- (id)init;

@end
