
@interface WBSRemotePlistController : NSObject {
    id /* block */  _builtInListDataProvider;
    WBSConfigurationDownloader * _configurationDownloader;
    <WBSRemotePlistSnapshot> * _currentSnapshot;
    <WBSRemotePlistControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _diskWriteQueue;
    NSURL * _downloadsDirectoryURL;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _resourceName;
    NSString * _resourceVersion;
    bool  _shouldAttemptToDownloadConfiguration;
    bool  _shouldAttemptToUpdateConfiguration;
    Class  _snapshotClass;
    Class  _snapshotTransformerClass;
    NSString * _updateDateDefaultsKey;
    double  _updateInterval;
    NSTimer * _updateTimer;
}

@property (nonatomic) <WBSRemotePlistControllerDelegate> *delegate;
@property (nonatomic) bool shouldAttemptToDownloadConfiguration;
@property (nonatomic) bool shouldAttemptToUpdateConfiguration;

+ (id)new;

- (void).cxx_destruct;
- (void)_didLoadSnapshot:(id)arg1;
- (id)_downloadedListResourceName;
- (id)_lastConfigurationUpdateAttemptDate;
- (void)_loadBuiltInSnapshotIfNeeded;
- (void)_loadDownloadedSnapshotIfNeeded;
- (void)_resetUpdateTimer;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (bool)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1;
- (void)_updateDownloadedPlistIfNecessary;
- (id)_urlOfDownloadedList;
- (id)_urlOfInternalOverrideList;
- (void)_writeConfigurationData:(id)arg1;
- (void)accessCurrentSnapshot:(id /* block */)arg1;
- (void)accessSnapshotLoadingItIfNeeded:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)fetchDataFromCurrentSnapshot:(id /* block */)arg1;
- (id)init;
- (id)initWithBuiltInListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 snapshotClass:(Class)arg7 snapshotTransformerClass:(Class)arg8;
- (id)initWithDownloadsDirectoryURL:(id)arg1 resourceName:(id)arg2 resourceVersion:(id)arg3 updateDateDefaultsKey:(id)arg4 updateInterval:(double)arg5 snapshotClass:(Class)arg6 snapshotTransformerClass:(Class)arg7 builtInListDataProvider:(id /* block */)arg8;
- (void)prepareForTermination;
- (void)setDelegate:(id)arg1;
- (void)setShouldAttemptToDownloadConfiguration:(bool)arg1;
- (void)setShouldAttemptToUpdateConfiguration:(bool)arg1;
- (bool)shouldAttemptToDownloadConfiguration;
- (bool)shouldAttemptToUpdateConfiguration;

@end
