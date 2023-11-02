
@interface PHAssetResourceManager : NSObject <PHAssetResourceRequestDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _managerID;
    _Atomic int  _nextRequestID;
    NSMutableDictionary * _requestsByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (unsigned long long)_nextManagerID;
+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_autoResolveReferencedResources:(id)arg1 folderURL:(id)arg2 resourceClient:(id)arg3;
- (int)_nextRequestID;
- (int)_requestForAssetResource:(id)arg1 loadURLOnly:(bool)arg2 options:(id)arg3 urlReceivedHandler:(id /* block */)arg4 dataReceivedHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancelDataRequest:(int)arg1;
- (id)consolidateAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)infoForRequest:(int)arg1;
- (id)init;
- (id)reconnectAssets:(id)arg1 urlResolvingHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (int)vcp_inMemoryDownload:(id)arg1 withTaskID:(unsigned long long)arg2 toData:(id*)arg3 cancel:(id /* block */)arg4;
+ (void)vcp_reportDownload:(unsigned long long)arg1 withTaskID:(unsigned long long)arg2;
+ (int)vcp_requestFileURLForAssetResource:(id)arg1 withTaskID:(unsigned long long)arg2 timeoutHandler:(id /* block */)arg3 urlHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
+ (int)vcp_requestFileURLForAssetResource:(id)arg1 withTaskID:(unsigned long long)arg2 toResourceURL:(id*)arg3 cancel:(id /* block */)arg4;

@end
