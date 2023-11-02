
@protocol GKMultiplayerCustomInviteMessageViewControllerDelegate <NSObject>

@required

- (void)customInviteViewController:(GKMultiplayerCustomInviteMessageViewController *)arg1 didFinishWithMessage:(NSString *)arg2;
- (NSString *)existingMessageForInviteViewController:(GKMultiplayerCustomInviteMessageViewController *)arg1;

@end
