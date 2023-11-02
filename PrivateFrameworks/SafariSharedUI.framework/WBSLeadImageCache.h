
@interface WBSLeadImageCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    WBSSiteMetadataImageCache * _imageCache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    NSMutableDictionary * _urlStringToRequestSets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRequest:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (void)emptyCaches;
- (id)imageDirectoryURL;
- (id)imageForURL:(id)arg1;
- (id)initWithImageDirectoryURL:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)saveImage:(id)arg1 forURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)savePendingChangesBeforeTermination;
- (void)setProviderDelegate:(id)arg1;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;

@end
