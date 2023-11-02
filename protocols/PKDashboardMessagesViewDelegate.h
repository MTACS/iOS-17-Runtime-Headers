
@protocol PKDashboardMessagesViewDelegate <NSObject>

@required

- (void)messagesView:(PKDashboardMessagesView *)arg1 scrolledToMessageWithIdentifier:(NSString *)arg2;
- (bool)messagesView:(PKDashboardMessagesView *)arg1 shouldEnqueueEventForView:(PKDashboardPassMessage *)arg2;

@end
