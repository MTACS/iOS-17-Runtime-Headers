
@protocol VUIDownloadDataSourceDelegate <NSObject>

@optional

- (void)downloadManager:(VUIDownloadDataSource *)arg1 downloadedFetchDidFinishWithEntities:(NSArray *)arg2;
- (void)downloadManager:(VUIDownloadDataSource *)arg1 downloadsDidChange:(NSArray *)arg2;

@end
