
@interface WBSLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider> {
    WBSSiteMetadataImageCache * _imageCache;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (void)dealloc;
- (void)emptyCaches;
- (id)imageForHost:(id)arg1;
- (id)initWithImageDirectoryURL:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)saveImage:(id)arg1 forHost:(id)arg2;
- (void)savePendingChangesBeforeTermination;
- (void)setProviderDelegate:(id)arg1;

@end
