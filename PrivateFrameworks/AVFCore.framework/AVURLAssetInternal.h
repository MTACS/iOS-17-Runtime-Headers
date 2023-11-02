
@interface AVURLAssetInternal : NSObject {
    NSURL * URL;
    AVAssetClientURLRequestHelper * URLRequestHelper;
    AVAssetCache * assetCache;
    AVAssetCustomURLAuthentication * customURLAuthenticationUsingKeychain;
    AVAssetCustomURLBridgeForNSURLProtocol * customURLBridgeForNSURLProtocol;
    bool  hasInstanceIdentifierMapping;
    NSDictionary * initializationOptions;
    AVAssetInspectorLoader * loader;
    AVDispatchOnce * makeOneAssetDownloadCacheOnly;
    AVDispatchOnce * makeOneResourceLoaderOnly;
    bool  requiresSecurityScopeRelease;
    AVAssetResourceLoader * resourceLoader;
    AVWeakReference * sessionReference;
    NSArray * tracks;
    NSObject<OS_dispatch_queue> * tracksAccessQueue;
}

@end
