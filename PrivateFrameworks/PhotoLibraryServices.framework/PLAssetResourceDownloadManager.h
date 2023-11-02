
@interface PLAssetResourceDownloadManager : NSObject {
    _Atomic int  _currentRequestId;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _requestById;
    NSObject<OS_dispatch_queue> * _requestIsolationQueue;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)_requestWithID:(int)arg1;
- (void)_setRequest:(id)arg1 forRequestID:(int)arg2;
- (void)cancelRequest:(int)arg1;
- (id)init;
- (int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 library:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;

@end
