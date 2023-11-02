
@protocol MessageListThreadHelperDelegate <MessageListItemHelperDelegate>

@required

- (NSSet *)expandedThreadItemIDs;
- (void)messageListThreadHelper:(MessageListThreadHelper *)arg1 didCollapseMessageListItem:(id <EMMessageListItem>)arg2;
- (void)messageListThreadHelper:(MessageListThreadHelper *)arg1 didExpandMessageListItem:(id <EMMessageListItem>)arg2;

@end
