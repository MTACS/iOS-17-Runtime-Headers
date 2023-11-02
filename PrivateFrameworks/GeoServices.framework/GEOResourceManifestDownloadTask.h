
@interface GEOResourceManifestDownloadTask : NSObject <GEODataURLSessionTaskDelegate> {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _existingETag;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSObject<OS_dispatch_queue> * _queue;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _started;
    GEODataURLSessionTask * _task;
    <NSObject> * _transaction;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithUpdatedManifest:(id)arg1 newETag:(id)arg2 isExistingManifestCurrent:(bool)arg3 error:(id)arg4;
- (void)_recordNetworkEventDataForTask:(id)arg1;
- (void)cancel;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dataURLSession:(id)arg1 shouldConvertDataTask:(id)arg2 toDownloadTaskForEstimatedResponseSize:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithURL:(id)arg1 eTag:(id)arg2;
- (void)startWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;

@end
