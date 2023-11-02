
@protocol MessageListRecentSectionDataSourceDelegate <MessageListSectionDataSourceDelegate>

@required

- (void)messageListRecentSectionDataSource:(MessageListRecentSectionDataSource *)arg1 didConfigureCellAtIndexPath:(NSIndexPath *)arg2 item:(id <EMMessageListItem>)arg3 itemWasCached:(bool)arg4 duration:(double)arg5;
- (void)messageListRecentSectionDataSource:(MessageListRecentSectionDataSource *)arg1 didFailToConfigureCellAtIndexPath:(NSIndexPath *)arg2 error:(NSError *)arg3;
- (bool)messageListRecentSectionDataSourceIsInExpandedEnvironment:(MessageListRecentSectionDataSource *)arg1;

@end
