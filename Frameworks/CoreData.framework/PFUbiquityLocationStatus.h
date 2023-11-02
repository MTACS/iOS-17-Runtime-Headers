
@interface PFUbiquityLocationStatus : NSObject {
    NSError * _error;
    unsigned long long  _hash;
    bool  _isDeleted;
    bool  _isDownloaded;
    bool  _isDownloading;
    bool  _isExported;
    bool  _isFailed;
    bool  _isImported;
    bool  _isLive;
    bool  _isScheduled;
    bool  _isUploaded;
    bool  _isUploading;
    PFUbiquityLocation * _location;
    long long  _numBytes;
    long long  _numNotifications;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLocation:(id)arg1;

@end
