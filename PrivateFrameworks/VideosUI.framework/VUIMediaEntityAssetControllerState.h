
@interface VUIMediaEntityAssetControllerState : NSObject <NSCopying> {
    bool  _allowsCellular;
    NSDate * _availabilityEndDate;
    unsigned long long  _bytesDownloaded;
    unsigned long long  _bytesToDownload;
    NSDate * _downloadExpirationDate;
    bool  _downloadFailedDueToError;
    double  _downloadProgress;
    bool  _performsKeyFetchOnly;
    bool  _renewsOfflineKeysAutomatically;
    unsigned long long  _status;
    bool  _supportsCancellation;
    bool  _supportsPausing;
}

@property (nonatomic) bool allowsCellular;
@property (nonatomic, retain) NSDate *availabilityEndDate;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic, retain) NSDate *downloadExpirationDate;
@property (nonatomic) bool downloadFailedDueToError;
@property (getter=isDownloadInProgress, nonatomic, readonly) bool downloadInProgress;
@property (nonatomic) double downloadProgress;
@property (nonatomic) bool performsKeyFetchOnly;
@property (nonatomic) bool renewsOfflineKeysAutomatically;
@property (nonatomic) unsigned long long status;
@property (nonatomic) bool supportsCancellation;
@property (nonatomic) bool supportsPausing;

- (void).cxx_destruct;
- (bool)allowsCellular;
- (id)availabilityEndDate;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesToDownload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadExpirationDate;
- (bool)downloadFailedDueToError;
- (double)downloadProgress;
- (unsigned long long)hash;
- (id)init;
- (bool)isDownloadInProgress;
- (bool)isEqual:(id)arg1;
- (bool)performsKeyFetchOnly;
- (bool)renewsOfflineKeysAutomatically;
- (void)setAllowsCellular:(bool)arg1;
- (void)setAvailabilityEndDate:(id)arg1;
- (void)setBytesDownloaded:(unsigned long long)arg1;
- (void)setBytesToDownload:(unsigned long long)arg1;
- (void)setDownloadExpirationDate:(id)arg1;
- (void)setDownloadFailedDueToError:(bool)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setPerformsKeyFetchOnly:(bool)arg1;
- (void)setRenewsOfflineKeysAutomatically:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setSupportsCancellation:(bool)arg1;
- (void)setSupportsPausing:(bool)arg1;
- (unsigned long long)status;
- (bool)supportsCancellation;
- (bool)supportsPausing;

@end
