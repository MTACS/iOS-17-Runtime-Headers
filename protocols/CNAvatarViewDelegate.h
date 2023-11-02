
@protocol CNAvatarViewDelegate <NSObject>

@required

- (UIViewController *)presentingViewControllerForAvatarView:(CNAvatarView *)arg1;

@optional

- (void)avatarView:(CNAvatarView *)arg1 didFailToUpdateViewForGroupConfiguration:(id <CNAvatarViewUpdateToken>)arg2 withError:(NSError *)arg3;
- (void)avatarView:(CNAvatarView *)arg1 didUpdateViewForGroupConfiguration:(id <CNAvatarViewUpdateToken>)arg2;
- (NSArray *)avatarView:(CNAvatarView *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (bool)avatarView:(CNAvatarView *)arg1 shouldShowContact:(CNContact *)arg2;
- (NSArray *)contactsForPreviewInteractionForAvatarView:(CNAvatarView *)arg1 suggestedKeysToFetch:(NSArray *)arg2;
- (void)didDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (void)didUpdateContentForAvatarView:(CNAvatarView *)arg1;
- (NSData *)overrideImageDataForPreviewInteractionForAvatarView:(CNAvatarView *)arg1;
- (bool)shouldShowActionsForAvatarView:(CNAvatarView *)arg1;
- (void)willBeginPreviewInteractionForAvatarView:(CNAvatarView *)arg1;
- (void)willDismissActionsForAvatarView:(CNAvatarView *)arg1;

@end
