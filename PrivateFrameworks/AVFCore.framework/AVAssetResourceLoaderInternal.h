
@interface AVAssetResourceLoaderInternal : NSObject {
    AVAssetClientURLRequestHelper * URLRequestHelper;
    NSURLSession * URLSession;
    NSOperationQueue * URLSessionOperationQueue;
    struct OpaqueFigCustomURLHandler { } * authHandler;
    AVAssetCustomURLBridgeForNSURLSession * bridgeBetweenHandlerAndSession;
    NSMutableDictionary * contentInformationCache;
    NSObject<OS_dispatch_queue> * contentInformationCachingQueue;
    struct OpaqueFigCustomURLHandler { } * contentKeySessionCustomURLHandler;
    struct OpaqueFigCustomURLHandler { } * customURLHandler;
    struct OpaqueFigCustomURLLoader { } * customURLLoader;
    NSObject<OS_dispatch_queue> * delegateQueue;
    int  loadingCancelled;
    NSMutableDictionary * pendingRequests;
    bool  preloadsEligibleContentKeys;
    struct OpaqueFigXPCRemoteClient { } * remoteHandlerXPCRemoteClient;
    NSObject<OS_dispatch_queue> * stateQueue;
    AVWeakReference * weakReferenceToAsset;
    AVWeakReference * weakReferenceToDelegate;
}

@end
