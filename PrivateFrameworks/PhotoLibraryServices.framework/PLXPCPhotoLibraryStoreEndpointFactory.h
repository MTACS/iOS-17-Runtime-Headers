
@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory> {
    PLAssetsdClient * _assetsdClient;
    NSURL * _libraryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAssetsdClient:(id)arg1;
- (id)newEndpoint;

@end
