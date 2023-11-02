
@interface VUIMPMediaItemDownloadControllerState : NSObject <NSCopying> {
    unsigned long long  _bytesDownloaded;
    unsigned long long  _bytesToDownload;
    bool  _downloadInProgress;
    double  _downloadProgress;
    bool  _downloadSucceeded;
    NSError * _error;
    unsigned long long  _status;
}

@property (nonatomic) unsigned long long bytesDownloaded;
@property (nonatomic) unsigned long long bytesToDownload;
@property (getter=isDownloadInProgress, nonatomic) bool downloadInProgress;
@property (nonatomic) double downloadProgress;
@property (nonatomic) bool downloadSucceeded;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesToDownload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)downloadProgress;
- (bool)downloadSucceeded;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (bool)isDownloadInProgress;
- (bool)isEqual:(id)arg1;
- (void)setBytesDownloaded:(unsigned long long)arg1;
- (void)setBytesToDownload:(unsigned long long)arg1;
- (void)setDownloadInProgress:(bool)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadSucceeded:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
