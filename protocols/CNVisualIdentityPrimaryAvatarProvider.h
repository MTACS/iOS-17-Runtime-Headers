
@protocol CNVisualIdentityPrimaryAvatarProvider <NSObject>

@required

- (void)layoutPrimaryAvatar;
- (bool)primaryAvatarShouldDisplay;
- (void)updatePrimaryAvatarForVisualIdentity:(CNVisualIdentity *)arg1;
- (UIView *)viewForPrimaryAvatar;

@end
