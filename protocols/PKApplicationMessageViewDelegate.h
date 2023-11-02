
@protocol PKApplicationMessageViewDelegate

@required

- (void)applicationMessageView:(PKApplicationMessageView *)arg1 requestsContentDismissal:(PKApplicationMessageNode *)arg2;
- (void)applicationMessageView:(PKApplicationMessageView *)arg1 tappedApplicationMessageWithKey:(PKApplicationMessageKey *)arg2;
- (void)applicationMessageViewNeedsRemoval:(PKApplicationMessageView *)arg1;
- (void)applicationMessageViewNeedsSizeUpdate:(PKApplicationMessageView *)arg1;

@end
