
@protocol CNPosterEditOptionsViewControllerDelegate

@required

- (void)posterEditOptionsViewController:(CNPosterEditOptionsViewController *)arg1 didEditPosterWithContext:(CNAvatarPosterCarouselEditingContext *)arg2;
- (void)posterEditOptionsViewController:(CNPosterEditOptionsViewController *)arg1 didSelectAvatar:(CNContactImage *)arg2 poster:(CNContactPoster *)arg3;
- (void)posterEditOptionsViewController:(CNPosterEditOptionsViewController *)arg1 didSelectEditAvatarWithContext:(CNAvatarPosterCarouselEditingContext *)arg2;
- (void)posterEditOptionsViewControllerDidCancel:(CNPosterEditOptionsViewController *)arg1;
- (void)posterEditOptionsViewControllerDidSelectCreateNew:(CNPosterEditOptionsViewController *)arg1;

@end
