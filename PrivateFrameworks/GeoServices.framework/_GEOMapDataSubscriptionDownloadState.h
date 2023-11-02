
@interface _GEOMapDataSubscriptionDownloadState : NSObject {
    unsigned long long  _dataCount;
    unsigned long long  _dataSize;
    long long  _dbDownloadState;
    unsigned long long  _downloadMode;
    long long  _downloadReason;
    long long  _downloadUpdateType;
    GEOMapDataSubscriptionDownloader * _downloader;
    GEOMapDataSubscriptionState * _externalState;
    bool  _fullyLoadedForLatestVersions;
    bool  _fullyLoadedForStaleVersions;
    NSError * _lastError;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSProgress * _pendingProgress;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
