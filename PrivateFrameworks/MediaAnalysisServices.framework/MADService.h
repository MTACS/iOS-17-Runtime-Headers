
@interface MADService : NSObject <MADServiceProtocol, VCPMediaAnalysisClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSObject<OS_dispatch_queue> * _progressHandlerQueue;
    NSMutableDictionary * _progressHandlers;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _requestID;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
    NSMutableDictionary * _resultHandlers;
}

+ (id)allowedClasses;
+ (id)allowedVideoRequestClasses;
+ (id)allowedVideoResultClasses;
+ (void)configureServerInterface:(id)arg1;
+ (bool)isEntitled;
+ (id)serverProtocol;
+ (id)service;
+ (id)serviceName;

- (void).cxx_destruct;
- (int)_performRequests:(id)arg1 onIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)addProgressHandler:(id /* block */)arg1 forRequestID:(int)arg2;
- (void)addResultHandler:(id /* block */)arg1 forRequestID:(int)arg2;
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2 engagementSuggestionType:(id)arg3;
- (void)cancelAllRequests;
- (void)cancelRequestID:(int)arg1;
- (id)connection;
- (unsigned long long)currentOutstandingTasks;
- (void)dealloc;
- (void)endEntryPoint;
- (void)handleResult:(id)arg1 atRequestIdx:(unsigned long long)arg2 forRequestID:(int)arg3;
- (id)init;
- (id)initInternal;
- (bool)performRequests:(id)arg1 assetLocalIdentifier:(id)arg2 photoLibraryURL:(id)arg3 error:(id*)arg4;
- (int)performRequests:(id)arg1 assetLocalIdentifier:(id)arg2 photoLibraryURL:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (int)performRequests:(id)arg1 assetLocalIdentifier:(id)arg2 photoLibraryURL:(id)arg3 progressHandler:(id /* block */)arg4 resultHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (int)performRequests:(id)arg1 onAssetWithCloudIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)performRequests:(id)arg1 onAssetWithIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 fromPhotoLibraryWithURL:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)performRequests:(id)arg1 onAssetWithIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 fromPhotoLibraryWithURL:(id)arg4 error:(id*)arg5;
- (int)performRequests:(id)arg1 onAssetWithLocalIdentifier:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)performRequests:(id)arg1 onAssetWithSyndicationIdentifier:(id)arg2 error:(id*)arg3;
- (int)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 withOrientation:(unsigned int)arg3 andIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)performRequests:(id)arg1 onCGImage:(struct CGImage { }*)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 completionHandler:(id /* block */)arg6;
- (int)performRequests:(id)arg1 onCIImage:(id)arg2 withOrientation:(unsigned int)arg3 andIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)performRequests:(id)arg1 onImageData:(id)arg2 withUniformTypeIdentifier:(id)arg3 andIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)performRequests:(id)arg1 onImageData:(id)arg2 withUniformTypeIdentifier:(id)arg3 andIdentifier:(id)arg4 error:(id*)arg5;
- (int)performRequests:(id)arg1 onImageURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)performRequests:(id)arg1 onImageURL:(id)arg2 withIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)performRequests:(id)arg1 onImageURL:(id)arg2 withIdentifier:(id)arg3 error:(id*)arg4;
- (int)performRequests:(id)arg1 onPixelBuffer:(struct __CVBuffer { }*)arg2 withOrientation:(unsigned int)arg3 andIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)performRequests:(id)arg1 onPixelBuffer:(struct __CVBuffer { }*)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 completionHandler:(id /* block */)arg6;
- (int)performRequests:(id)arg1 onPixelBuffer:(struct __CVBuffer { }*)arg2 withOrientation:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (int)performRequests:(id)arg1 videoURL:(id)arg2 identifier:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (int)performRequestsWithCloudIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryPerformanceMeasurements;
- (void)removeProgressHandlerForRequestID:(int)arg1;
- (void)removeResultHandlerForRequestID:(int)arg1;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (void)resetPerformanceMeasurements;
- (id)sandboxExtensionForURL:(id)arg1 error:(id*)arg2;
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;
- (void)startEntryPointWithQueryID:(unsigned long long)arg1 andEvent:(unsigned long long)arg2;
- (id)userSafetyEnabled:(id*)arg1;

@end
