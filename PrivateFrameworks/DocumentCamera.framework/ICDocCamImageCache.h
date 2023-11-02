
@interface ICDocCamImageCache : NSObject {
    NSURL * _cachesDirectoryURL;
    <DCDataCryptorDelegate> * _dataCryptorDelegate;
    NSURL * _docCamImageDirectoryURL;
    NSObject<OS_dispatch_queue> * _imageCacheQueue;
    NSMutableDictionary * _imageSizeCache;
    DCLRUCache * _inMemoryImageCache;
}

@property (nonatomic, readonly) NSURL *cachesDirectoryURL;
@property (nonatomic, retain) <DCDataCryptorDelegate> *dataCryptorDelegate;
@property (nonatomic, readonly) NSURL *docCamImageDirectoryURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *imageCacheQueue;
@property (nonatomic, retain) NSMutableDictionary *imageSizeCache;
@property (nonatomic, retain) DCLRUCache *inMemoryImageCache;

- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (id)cachesDirectoryURL;
- (void)clearInMemoryCache;
- (id)createNSDataFrom:(id)arg1 metaData:(id)arg2;
- (id)dataCryptorDelegate;
- (void)dealloc;
- (bool)deleteAllImages;
- (bool)deleteImage:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)docCamImageDirectoryURL;
- (id)getImage:(id)arg1;
- (struct CGSize { double x1; double x2; })getImageSize:(id)arg1;
- (id)getImageURL:(id)arg1;
- (id)getImageURL:(id)arg1 async:(bool)arg2;
- (id)imageCacheQueue;
- (id)imagePropertiesFromMetadata:(id)arg1 orientation:(long long)arg2;
- (id)imageSizeCache;
- (id)inMemoryImageCache;
- (id)init;
- (id)initWithDataCryptorDelegate:(id)arg1;
- (id)initWithDataCryptorDelegate:(id)arg1 cachesDirectoryURL:(id)arg2;
- (bool)makeSureScanDirectoryExists:(id*)arg1;
- (bool)replaceImage:(id)arg1 metaData:(id)arg2 uuid:(id)arg3;
- (void)setDataCryptorDelegate:(id)arg1;
- (id)setImage:(id)arg1 metaData:(id)arg2;
- (id)setImage:(id)arg1 metaData:(id)arg2 addToMemoryCache:(bool)arg3 completion:(id /* block */)arg4;
- (void)setImageCacheQueue:(id)arg1;
- (void)setImageSizeCache:(id)arg1;
- (void)setInMemoryImageCache:(id)arg1;
- (bool)writeImage:(id)arg1 metaData:(id)arg2 toURL:(id)arg3 error:(id*)arg4;

@end
