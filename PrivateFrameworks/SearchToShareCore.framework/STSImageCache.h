
@interface STSImageCache : NSObject <NSURLSessionDownloadDelegate> {
    NSMutableDictionary * _cancelledDownloadOperationInfos;
    NSMutableDictionary * _downloadOperationInfos;
    NSMutableDictionary * _firstFrameImageCache;
    NSMutableDictionary * _imageInfoCache;
    NSURLSession * _imageSession;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queuedOperationsInfoQueue;
    UIImage * _searchProviderImage;
    NSMutableDictionary * _staticImageCache;
    NSURLCache * _urlCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *searchProviderImage;
@property (readonly) Class superclass;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (bool)_allowImageInfoCaching;
- (id)_imageFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_imageInfoUsingAVAssetReaderWithFileURL:(id)arg1;
- (id)_imageInfoWithData:(id)arg1;
- (id)_imageSession;
- (void)cancelAllDownloads;
- (void)cancelQueuedDownloadForURL:(id)arg1;
- (void)clearInMemoryCache;
- (id)fetchCachedImageInfoForURL:(id)arg1;
- (id)fetchCachedStaticImageForURL:(id)arg1;
- (id)fetchCachedStaticImageForURL:(id)arg1 hasMultipleFrames:(bool*)arg2;
- (void)fetchImageDataWithURL:(id)arg1 priority:(long long)arg2 isSource:(bool)arg3 begin:(id /* block */)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)fetchImageWithURL:(id)arg1 priority:(long long)arg2 isSource:(bool)arg3 begin:(id /* block */)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)init;
- (id)searchProviderImage;
- (void)setPriority:(long long)arg1 forQueuedDownloadWithURL:(id)arg2;
- (void)setSearchProviderImage:(id)arg1;

@end
