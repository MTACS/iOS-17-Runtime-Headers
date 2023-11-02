
@protocol ContactsUI.CNAvatarPosterPairCollectionViewControllerDelegate

@required

- (void)avatarPosterPairCollectionDidConfirmSelection;
- (void)avatarPosterPairCollectionDidEditPoster:(id)arg1;
- (void)avatarPosterPairCollectionDidSelectCreateNew;
- (void)avatarPosterPairCollectionDidSelectEditAvatar:(id)arg1;
- (void)avatarPosterPairCollectionDidSelectWithAvatar:(id)arg1 poster:(id)arg2 didChange:(bool)arg3 isShared:(bool)arg4;
- (void)avatarPosterPairCollectionDidTapDismiss;

@end
