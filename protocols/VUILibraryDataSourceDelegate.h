
@protocol VUILibraryDataSourceDelegate <NSObject>

@optional

- (void)dataSourceDidFinishFetching:(VUILibraryDataSource *)arg1;
- (void)dataSourceDidFinishFetchingArtwork:(VUILibraryDataSource *)arg1;

@end
