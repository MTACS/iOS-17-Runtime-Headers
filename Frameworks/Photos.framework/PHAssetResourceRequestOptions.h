
@interface PHAssetResourceRequestOptions : NSObject <NSCopying> {
    long long  _downloadIntent;
    bool  _downloadIsTransient;
    long long  _downloadPriority;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    NSNumber * _pruneAfterAvailableLowDiskThresholdBytes;
    bool  _pruneAfterAvailableOnLowDisk;
    bool  _resistentToPrune;
}

@property (nonatomic) long long downloadIntent;
@property (nonatomic) bool downloadIsTransient;
@property (nonatomic) long long downloadPriority;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) NSNumber *pruneAfterAvailableLowDiskThresholdBytes;
@property (nonatomic) bool pruneAfterAvailableOnLowDisk;
@property (nonatomic) bool resistentToPrune;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)downloadIntent;
- (bool)downloadIsTransient;
- (long long)downloadPriority;
- (bool)isNetworkAccessAllowed;
- (id /* block */)progressHandler;
- (id)pruneAfterAvailableLowDiskThresholdBytes;
- (bool)pruneAfterAvailableOnLowDisk;
- (bool)resistentToPrune;
- (void)setDownloadIntent:(long long)arg1;
- (void)setDownloadIsTransient:(bool)arg1;
- (void)setDownloadPriority:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPruneAfterAvailableLowDiskThresholdBytes:(id)arg1;
- (void)setPruneAfterAvailableOnLowDisk:(bool)arg1;
- (void)setResistentToPrune:(bool)arg1;

@end
