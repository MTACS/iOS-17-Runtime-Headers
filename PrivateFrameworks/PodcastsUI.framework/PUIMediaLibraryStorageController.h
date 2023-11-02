
@interface PUIMediaLibraryStorageController : NSObject {
    void _globalAutomaticDownloadLimit;
    void _ignoredAssetsAsPercentageOfTotalSpace;
    void _shouldDisplayStorageCleanupTip;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _shouldDisplayStorageCleanupTipPublisher;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _storageCleanupObservers;
    void activeObserver;
    void downloadedAssetsAsPercentageOfTotalSpace;
    void globalDownloadLimitObserver;
}

@property (nonatomic) bool shouldDisplayStorageCleanupTip;

+ (id)shared;

- (void).cxx_destruct;
- (void)dealloc;
- (void)ignoreStorageCleanupPrompt;
- (id)init;
- (void)mediaLibraryDidChange;
- (long long)observeStorageCleanupChange:(id /* block */)arg1;
- (void)refreshDownloadedAssets;
- (void)removeStorageCleanupChangeObserverWith:(long long)arg1;
- (void)setShouldDisplayStorageCleanupTip:(bool)arg1;
- (bool)shouldDisplayStorageCleanupTip;

@end
