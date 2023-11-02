
@interface GEOMapDataSubscriptionState : NSObject <GEOXPCSerializable> {
    unsigned long long  _dataCount;
    unsigned long long  _dataSize;
    long long  _downloadState;
    NSError * _lastError;
    long long  _loadState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSProgress * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSProgress *downloadProgress;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) unsigned long long downloadedDataCount;
@property (nonatomic, readonly) unsigned long long downloadedDataSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) long long loadState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)downloadProgress;
- (long long)downloadState;
- (unsigned long long)downloadedDataCount;
- (unsigned long long)downloadedDataSize;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (id)lastError;
- (long long)loadState;

@end
