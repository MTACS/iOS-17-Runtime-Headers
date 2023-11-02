
@interface PHLivePhotoRequestOptions : NSObject <NSCopying, PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions> {
    long long  _deliveryMode;
    long long  _downloadIntent;
    long long  _downloadPriority;
    bool  _includeImage;
    bool  _liveRenderVideoIfNeeded;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long deliveryMode;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeImage;
@property (nonatomic) bool liveRenderVideoIfNeeded;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly, copy) id /* block */ progressHandler;
@property (readonly) Class superclass;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (bool)includeImage;
- (id)init;
- (bool)isCurrentVersion;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (bool)liveRenderAndOnDemandRenderVideoConcurrently;
- (bool)liveRenderVideoIfNeeded;
- (id /* block */)progressHandler;
- (id)renderResultHandlerQueue;
- (id)resultHandlerQueue;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setDownloadPriority:(long long)arg1;
- (void)setIncludeImage:(bool)arg1;
- (void)setLiveRenderVideoIfNeeded:(bool)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
