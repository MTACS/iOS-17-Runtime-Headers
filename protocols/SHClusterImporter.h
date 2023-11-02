
@protocol SHClusterImporter <NSObject>

@required

- (bool)loadDataFromFileInfo:(SHDataFetcherFileInfo *)arg1 withMetadata:(SHClusterMetadata *)arg2 toDestinationURL:(NSURL *)arg3 error:(id*)arg4;

@end
