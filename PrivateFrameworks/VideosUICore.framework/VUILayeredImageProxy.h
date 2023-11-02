
@interface VUILayeredImageProxy : NSObject {
    NSString * _assetKey;
    bool  _cancelled;
    _TVURLSessionDownloadTaskWrapper * _downloadTaskWrapper;
    long long  _groupType;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *assetKey;
@property (getter=isCancelled) bool cancelled;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)_loadingQueue;

- (void).cxx_destruct;
- (id)_assetPathWithAssetKey:(id)arg1;
- (id)assetKey;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (long long)groupType;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 groupType:(long long)arg2;
- (id)initWithURL:(id)arg1 groupType:(long long)arg2 assetKey:(id)arg3;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (bool)isImageAvailable;
- (bool)isLoading;
- (void)loadWithCompletion:(id /* block */)arg1;
- (void)setCancelled:(bool)arg1;
- (id)url;

@end
