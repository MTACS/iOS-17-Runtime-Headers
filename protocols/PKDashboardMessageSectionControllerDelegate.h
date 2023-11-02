
@protocol PKDashboardMessageSectionControllerDelegate <NSObject>

@required

- (void)reloadDataAnimated:(bool)arg1;

@optional

- (void)messagesView:(PKDashboardMessagesView *)arg1 scrolledToMessageWithIdentifier:(NSString *)arg2;

@end
