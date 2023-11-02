
@protocol ICMentionsControllerUI <NSObject>

@optional

- (NSDictionary *)fetchContactNamesForParticipants:(NSArray *)arg1;
- (void)registerForContactsChangedNotification;

@end
