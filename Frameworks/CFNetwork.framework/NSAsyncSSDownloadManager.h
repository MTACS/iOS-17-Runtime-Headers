
@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {
    NSMutableDictionary * _downloads;
    SSDownloadManager * _manager;
    NSOperationQueue * _queue;
    bool  _reconnectInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_attemptReconnect;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;

@end
