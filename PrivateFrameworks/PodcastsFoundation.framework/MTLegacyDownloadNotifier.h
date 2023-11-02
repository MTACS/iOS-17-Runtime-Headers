
@interface MTLegacyDownloadNotifier : NSObject {
    NSMutableArray * _downloadListeners;
}

@property (nonatomic, retain) NSMutableArray *downloadListeners;

- (void).cxx_destruct;
- (id)_listenerWithDelegate:(id)arg1;
- (void)_sendDelegateSelector:(SEL)arg1 withDownload:(id)arg2;
- (void)_sendDelegateSelector:(SEL)arg1 withDownloadCount:(id)arg2;
- (void)_sendDelegateSelector:(SEL)arg1 withDownloads:(id)arg2;
- (id)downloadListeners;
- (id)init;
- (void)registerForUpdates:(id)arg1;
- (void)setDownloadListeners:(id)arg1;
- (void)unregisterForUpdates:(id)arg1;

@end
