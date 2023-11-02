
@protocol MessageListDataSourceDelegate <NSObject>

@required

- (void)messageListDataSource:(MessageListDataSource *)arg1 didUpdateWithChange:(MessageListSectionDataSourceChange *)arg2 section:(MessageListSectionDataSource *)arg3 animated:(bool)arg4;
- (bool)messageListDataSource:(MessageListDataSource *)arg1 shouldSuspendUpdatesAfterChange:(MessageListSectionDataSourceChange *)arg2;
- (void)messageListDataSource:(MessageListDataSource *)arg1 willUpdateWithChange:(MessageListSectionDataSourceChange *)arg2 section:(MessageListSectionDataSource *)arg3 animated:(bool)arg4 cleanSnapshot:(bool)arg5;
- (void)messageListDataSourceDidSkipUpdate:(MessageListDataSource *)arg1 section:(MessageListSectionDataSource *)arg2 change:(MessageListSectionDataSourceChange *)arg3;
- (void)messageListDataSourcePrepareUpdate:(MessageListDataSource *)arg1 section:(MessageListSectionDataSource *)arg2 cleanSnapshot:(bool)arg3;
- (void)messageListDataSourceUpdateFailed:(MessageListDataSource *)arg1 section:(MessageListSectionDataSource *)arg2;

@end
