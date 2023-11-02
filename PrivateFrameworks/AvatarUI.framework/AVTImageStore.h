
@interface AVTImageStore : NSObject <AVTImageCache> {
    NSFileManager * _fileManager;
    <AVTImageEncoder> * _imageEncoder;
    NSURL * _location;
    <AVTUILogger> * _logger;
    NSObject<OS_dispatch_queue> * _stateLock;
    bool  _validateImages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTImageEncoder> *imageEncoder;
@property (nonatomic, readonly, copy) NSURL *location;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool validateImages;

+ (void)clearContentAtLocation:(id)arg1 logger:(id)arg2;
+ (id)resourceURLForItem:(id)arg1 scope:(id)arg2 baseURL:(id)arg3 encoder:(id)arg4;

- (void).cxx_destruct;
- (id)_imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (bool)applyFileProtectionForResourceAtURL:(id)arg1 error:(id*)arg2;
- (bool)copyImagesForPersistentIdentifierPrefix:(id)arg1 toPersistentIdentifierPrefix:(id)arg2 error:(id*)arg3;
- (bool)createDirectoryIfNeeded:(id*)arg1;
- (bool)deleteImagesForItemsWithPersistentIdentifierPrefix:(id)arg1 error:(id*)arg2;
- (id)fileManager;
- (id)imageEncoder;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (id)imageForItem:(id)arg1 scope:(id)arg2 error:(id*)arg3;
- (id)initWithEnvironment:(id)arg1 validateImages:(bool)arg2 location:(id)arg3;
- (id)initWithEnvironment:(id)arg1 validateImages:(bool)arg2 location:(id)arg3 encoder:(id)arg4;
- (id)location;
- (id)logger;
- (void)performStateWork:(id /* block */)arg1;
- (bool)resourceExistsInCacheForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(id /* block */)arg3;
- (id)resourceURLForItem:(id)arg1 scope:(id)arg2;
- (bool)saveImage:(id)arg1 forItem:(id)arg2 scope:(id)arg3 error:(id*)arg4;
- (bool)saveImage:(id)arg1 withImageData:(id)arg2 forItem:(id)arg3 scope:(id)arg4 error:(id*)arg5;
- (id)stateLock;
- (bool)validateImages;

@end
