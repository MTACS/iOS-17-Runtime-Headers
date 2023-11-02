
@interface CNVisualIdentityContactAvatarProvider : NSObject {
    CNAvatarImageRenderer * _avatarImageRenderer;
    <CNAvatarImageRenderingScope> * _renderingScope;
}

@property (nonatomic, retain) CNAvatarImageRenderer *avatarImageRenderer;
@property (nonatomic, retain) <CNAvatarImageRenderingScope> *renderingScope;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)avatarImageForContact:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 includePlaceholder:(bool)arg3 imageHandler:(id /* block */)arg4;
- (id)avatarImageRenderer;
- (id)imageForAvatarAccessoryView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)renderingScope;
- (void)setAvatarImageRenderer:(id)arg1;
- (void)setRenderingScope:(id)arg1;

@end
