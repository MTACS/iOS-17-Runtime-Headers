
@interface LiveFSThumbnailsServiceSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, QLThumbnailCache> {
    LiveFSFPExtensionHelper * ex;
    QLExternalThumbnailCache * thumbnailCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getThumbnailCacheURLWrappersWithCompletion:(id /* block */)arg1;
- (void)getThumbnailURLForItem:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithFileProviderExtension:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)makeListenerEndpointAndReturnError:(id*)arg1;
- (id)serviceName;
- (void)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 completion:(id /* block */)arg3;
- (id)thumbnailCache;

@end
