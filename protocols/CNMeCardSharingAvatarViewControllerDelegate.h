
@protocol CNMeCardSharingAvatarViewControllerDelegate <NSObject>

@required

- (void)avatarViewControllerDidUpdateImage:(CNMeCardSharingAvatarViewController *)arg1 needsLayout:(bool)arg2;
- (void)avatarViewControllerWasTapped:(CNMeCardSharingAvatarViewController *)arg1;

@end
