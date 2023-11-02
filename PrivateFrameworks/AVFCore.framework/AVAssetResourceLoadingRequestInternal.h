
@interface AVAssetResourceLoadingRequestInternal : NSObject {
    NSMutableURLRequest * URLRequest;
    NSDictionary * cachedContentInformation;
    NSMutableData * cachedData;
    int  cancelled;
    AVAssetResourceLoadingContentInformationRequest * contentInformationRequest;
    unsigned long long  cryptorKeyRequestID;
    struct OpaqueFigCustomURLHandler { } * customURLHandler;
    struct OpaqueFigCustomURLLoader { } * customURLLoader;
    NSObject<OS_dispatch_queue> * dataCachingQueue;
    AVAssetResourceLoadingDataRequest * dataRequest;
    struct OpaqueFigCPECryptor { } * figCryptor;
    int  finished;
    NSURLRequest * redirect;
    unsigned long long  requestID;
    struct __CFDictionary { } * requestInfo;
    AVAssetResourceLoadingRequestor * requestor;
    NSURLResponse * response;
    AVDispatchOnce * responseInfoSentOnceToken;
    int  sentContentInfo;
    id /* block */  streamingKeyRequestCompletionHandler;
    AVWeakReference * weakReference;
    AVWeakReference * weakReferenceToResourceLoader;
}

@end
