
@protocol CNKCallDetailsCoordinatorProtocol <NSObject, CNKConversationHUDDetailsViewControllerDelegate>

@required

- (bool)isCaptioningEnabled;
- (void)setShouldHideViewsFromScreenSharing:(bool)arg1;
- (bool)shouldHideViewsFromScreenSharing;
- (void)startWithReason:(NSString *)arg1;
- (void)stopWithReason:(NSString *)arg1;
- (void)wantsDismissal;

@end
