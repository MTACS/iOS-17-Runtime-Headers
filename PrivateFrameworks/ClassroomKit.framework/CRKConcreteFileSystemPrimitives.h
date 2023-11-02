
@interface CRKConcreteFileSystemPrimitives : NSObject <CRKFileSystemPrimitives> {
    NSOperationQueue * _accessQueue;
    NSFileManager * _fileManager;
}

@property (nonatomic, readonly) NSOperationQueue *accessQueue;
@property (nonatomic, readonly) NSFileManager *fileManager;
@property (nonatomic, readonly) NSURL *temporaryDirectoryURL;

+ (bool)isNoSuchFileError:(id)arg1;

- (void).cxx_destruct;
- (id)URLFromBookmarkData:(id)arg1 error:(id*)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 inBundle:(id)arg2;
- (id)accessQueue;
- (id)bookmarkDataForURL:(id)arg1 error:(id*)arg2;
- (id)contentsOfDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (void)coordinateCopyWithActionPairs:(id)arg1 completion:(id /* block */)arg2;
- (void)coordinateMoveWithActionPairs:(id)arg1 completion:(id /* block */)arg2;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)dataWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)dispatchSourceForFileDescriptor:(id)arg1 options:(unsigned long long)arg2;
- (id)emptyDirectoryNode;
- (bool)fileExistsAtURL:(id)arg1;
- (id)fileManager;
- (id)init;
- (bool)makeDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)nodeForURL:(id)arg1 error:(id*)arg2;
- (id)openURL:(id)arg1 options:(int)arg2 error:(id*)arg3;
- (id)promisedResourceValuesForKeys:(id)arg1 fromURL:(id)arg2 error:(id*)arg3;
- (void)removeCoordinatedItemsAtURLs:(id)arg1 completion:(id /* block */)arg2;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (id)resourceValuesForKeys:(id)arg1 fromURL:(id)arg2 error:(id*)arg3;
- (id)resourcesDirectoryURLForBundle:(id)arg1;
- (bool)setResources:(id)arg1 onURL:(id)arg2 error:(id*)arg3;
- (bool)startAccessingBookmarkURL:(id)arg1;
- (void)stopAccessingBookmarkURL:(id)arg1;
- (id)temporaryDirectoryURL;
- (bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end
