
@protocol ConversationKit.SystemBannerHostViewControllerDelegate <CNKSystemApertureProviderDelegate>

@required

- (void)deepLinkToFullScreenCallDetailsView;
- (void)deepLinkToFullScreenCallUI;
- (void)didDismiss:(_TtC15ConversationKit30SystemBannerHostViewController *)arg1 reason:(long long)arg2;
- (bool)hasPresentedFullScreenCallUI;
- (bool)isPresentingFullScreenCallUI;
- (bool)isSpringBoardLocked;

@end
