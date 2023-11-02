
@protocol CRKFileSystemPrimitives

@required

- (NSURL *)URLFromBookmarkData:(NSData *)arg1 error:(id*)arg2;
- (NSArray *)URLsForResourcesWithExtension:(NSString *)arg1 inBundle:(NSBundle *)arg2;
- (NSData *)bookmarkDataForURL:(NSURL *)arg1 error:(id*)arg2;
- (NSArray *)contentsOfDirectoryAtURL:(NSURL *)arg1 error:(id*)arg2;
- (void)coordinateCopyWithActionPairs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)coordinateMoveWithActionPairs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)copyItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (NSData *)dataWithContentsOfURL:(NSURL *)arg1 error:(id*)arg2;
- (NSObject<OS_dispatch_source> *)dispatchSourceForFileDescriptor:(id <CRKFileDescriptor>)arg1 options:(unsigned long long)arg2;
- (<CRKFileSystemNode> *)emptyDirectoryNode;
- (bool)fileExistsAtURL:(NSURL *)arg1;
- (bool)makeDirectoryAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)moveItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (<CRKFileSystemNode> *)nodeForURL:(NSURL *)arg1 error:(id*)arg2;
- (<CRKFileDescriptor> *)openURL:(NSURL *)arg1 options:(int)arg2 error:(id*)arg3;
- (void)removeCoordinatedItemsAtURLs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)removeItemAtURL:(NSURL *)arg1 error:(id*)arg2;
- (CRKURLResources *)resourceValuesForKeys:(NSArray *)arg1 fromURL:(NSURL *)arg2 error:(id*)arg3;
- (NSURL *)resourcesDirectoryURLForBundle:(NSBundle *)arg1;
- (bool)setResources:(CRKURLResources *)arg1 onURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)startAccessingBookmarkURL:(NSURL *)arg1;
- (void)stopAccessingBookmarkURL:(NSURL *)arg1;
- (NSURL *)temporaryDirectoryURL;
- (bool)writeData:(NSData *)arg1 toURL:(NSURL *)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end
