
@interface PLPreheatItem : NSObject {
    int  _CPLNotifyRegistrationToken;
    bool  _CPLPrefetching;
    bool  _CPLPrefetchingCancelled;
    NSString * _CPLPrefetchingDoneToken;
    NSObject<OS_dispatch_queue> * _CPLPrefetchingIsolationQueue;
    NSObject<OS_dispatch_group> * _CPLPrefetchingWaitGroup;
    bool  _CPLPrefetchingWasCancelled;
    NSString * _assetUUID;
    unsigned short  _bestFormat;
    bool  _cachingAllowed;
    PLAssetsdCloudClient * _cloudClient;
    bool  _didCompleteCPLPrefetchingWithSuccessOrError;
    unsigned short  _format;
    long long  _imageType;
    struct CGSize { 
        double width; 
        double height; 
    }  _optimalSourcePixelSize;
    _Atomic int  _requestCount;
    NSString * _virtualCPLTaskIdentifier;
}

@property (nonatomic, readonly) bool CPLPrefetching;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup;
@property bool CPLPrefetchingWasCancelled;
@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic) unsigned short bestFormat;
@property (nonatomic) bool cachingAllowed;
@property bool didCompleteCPLPrefetchingWithSuccessOrError;
@property (nonatomic, readonly) unsigned short format;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } optimalSourcePixelSize;
@property (retain) NSString *virtualCPLTaskIdentifier;

- (void).cxx_destruct;
- (bool)CPLPrefetching;
- (id)CPLPrefetchingWaitGroup;
- (bool)CPLPrefetchingWasCancelled;
- (bool)addImageHandler:(id /* block */)arg1;
- (id)assetUUID;
- (unsigned short)bestFormat;
- (id)cachedImage:(bool*)arg1;
- (id)cachedImageIfAvailable:(bool*)arg1;
- (bool)cachingAllowed;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)arg1;
- (long long)decrementRequestCount;
- (id)description;
- (bool)didCompleteCPLPrefetchingWithSuccessOrError;
- (unsigned short)format;
- (long long)imageType;
- (long long)incrementRequestCount;
- (id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(unsigned short)arg2 assetsdClient:(id)arg3;
- (bool)isCancelled;
- (bool)isRetained;
- (struct CGSize { double x1; double x2; })optimalSourcePixelSize;
- (void)setBestFormat:(unsigned short)arg1;
- (void)setCPLPrefetchingWasCancelled:(bool)arg1;
- (void)setCachingAllowed:(bool)arg1;
- (void)setDidCompleteCPLPrefetchingWithSuccessOrError:(bool)arg1;
- (void)setVirtualCPLTaskIdentifier:(id)arg1;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)arg1;
- (id)virtualCPLTaskIdentifier;

@end
