
@interface MTLegacyDownloadManagerProvider : MTSingleton {
    <MTLegacyDownloadManagerProtocol><MTLegacyDownloadDataSource><MTBackgroundURLSessionEventsHandler><MTURLSessionInvalidator> * _downloads;
    MTLegacyDownloadNotifier * _notifier;
}

@property (nonatomic, retain) <MTLegacyDownloadManagerProtocol><MTLegacyDownloadDataSource><MTBackgroundURLSessionEventsHandler><MTURLSessionInvalidator> *downloads;
@property (nonatomic, retain) MTLegacyDownloadNotifier *notifier;

- (void).cxx_destruct;
- (id)downloadManager;
- (id)downloadManagerIfSetup;
- (id)downloads;
- (id)downloadsNotifier;
- (id)notifier;
- (void)setDownloads:(id)arg1;
- (void)setNotifier:(id)arg1;
- (void)setupWith:(id)arg1 downloadsNotifier:(id)arg2;

@end
