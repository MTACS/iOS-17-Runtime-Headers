
@interface _SFDownloadStorageUsageMonitor : NSObject <SFDownloadFileDelegate, SFDownloadStorageUsageMonitorEntryDelegate> {
    NSMutableDictionary * _entries;
    SFDownloadFile * _historyFile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) long long usage;

- (void).cxx_destruct;
- (void)_reloadDownloadHistory;
- (void)downloadFileContentsDidChange:(id)arg1;
- (void)downloadFileDidChangeURL:(id)arg1;
- (void)downloadFileWillBeDeleted:(id)arg1;
- (void)entryDidChangeUsage:(id)arg1;
- (id)init;
- (long long)usage;

@end
