
@protocol PKAccountSupportTopicsSectionControllerDelegate

@required

- (void)deselectCells;
- (void)openBusinessChatForTopic:(PKAccountSupportTopic *)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)showExplanationForTopic:(PKAccountSupportTopic *)arg1;

@end
