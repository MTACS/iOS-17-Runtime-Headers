
@interface PLAssetDownloadManager : NSObject {
    _Atomic int  _currentRequestId;
    <PLAssetDownloadManagerDelegate> * _delegate;
    NSMutableDictionary * _progressById;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requestsById;
}

@property (nonatomic) <PLAssetDownloadManagerDelegate> *delegate;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)cancelRequest:(int)arg1;
- (id)delegate;
- (id)init;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:(id)arg1 library:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
