
@interface PLAssetsdCPLResourceDownloader : NSObject {
    NSXPCConnection * _clientConnection;
    NSMutableDictionary * _pendingCPLDownloads;
    NSObject<OS_dispatch_queue> * _pendingCPLDownloadsIsolationQueue;
    PLPhotoLibrary * _photoLibrary;
    NSString * _trustedCallerBundleID;
}

- (void).cxx_destruct;
- (void)_handleInvalidation;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelCPLDownloadTasks:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleInvalidation;
- (id)initWithPhotoLibrary:(id)arg1 trustedCallerBundleID:(id)arg2 clientConnection:(id)arg3;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg1 downloadContext:(id)arg2;
- (id)startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(bool)arg3 highPriority:(bool)arg4 track:(bool)arg5 notify:(bool)arg6 transient:(bool)arg7 proposedTaskIdentifier:(id)arg8 doneToken:(id)arg9 error:(id*)arg10;

@end
