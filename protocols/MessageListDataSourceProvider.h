
@protocol MessageListDataSourceProvider <NSObject>

@required

- (MessageListSectionDataSource *)messageListDataSource:(MessageListDataSource *)arg1 sectionDataSourceForSection:(NSString *)arg2 objectID:(EMObjectID *)arg3 messageList:(EMMessageList *)arg4;
- (bool)messageListDataSource:(MessageListDataSource *)arg1 shouldAnimateNextUpdateInSectionDataSource:(MessageListSectionDataSource *)arg2 change:(MessageListSectionDataSourceChange *)arg3;

@end
