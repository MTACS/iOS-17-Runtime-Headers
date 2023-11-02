
@interface SFUIAvatarImageRenderer : NSObject {
    CNAvatarImageRenderer * _imageRenderer;
}

@property (nonatomic, readonly) <CNKeyDescriptor> *descriptorForRequiredKeys;
@property (nonatomic, retain) CNAvatarImageRenderer *imageRenderer;

+ (id)avatarImageRender;

- (void).cxx_destruct;
- (id)avatarImageForContacts:(id)arg1;
- (id)avatarImageForContacts:(id)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 rightToLeft:(bool)arg4 style:(unsigned long long)arg5 backgroundStyle:(unsigned long long)arg6;
- (id)avatarImageForContacts:(id)arg1 scope:(id)arg2;
- (id)descriptorForRequiredKeys;
- (id)imageRenderer;
- (id)init;
- (id)placeholderImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setImageRenderer:(id)arg1;

@end
