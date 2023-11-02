
@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring> {
    NSXPCConnection * _connection;
    NSCache * _localStorageCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)_availableBundleIdentifiers;
- (id)_localStorageCache;
- (bool)accessBundleContentForBundleIdentifiers:(id)arg1 withBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)availableSchemasWithError:(id*)arg1;
- (bool)canLoadImageDataForImage:(id)arg1;
- (bool)canStoreImage:(id)arg1;
- (void)dealloc;
- (id)fetchShareExtensionIntentForExtensionContextUUID:(id)arg1;
- (id)imageServiceSchemaURLsForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)loadDataImageFromImage:(id)arg1 scaledSize:(struct { double x1; double x2; })arg2 error:(id*)arg3;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(struct { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (void)loadImageDataAndSizeForImage:(id)arg1 reply:(id /* block */)arg2;
- (id)loadSchemasForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)schemaURLsForBundleIdentifiers:(id)arg1;
- (id)securityScopedURLsForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (id)serviceProxyWithErrorHandler:(id /* block */)arg1;
- (id)storeImage:(id)arg1 scaled:(bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 error:(id*)arg5;
- (oneway void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)synchronousServiceProxyWithErrorHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_accessBundleContentForBundleIdentifiers:(id)arg1 withBlock:(id /* block */)arg2;

@end
