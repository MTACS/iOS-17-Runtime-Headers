
@interface STStorageCacheDelete : NSObject {
    int  _cdNotifyToken;
    bool  _inited;
    NSDictionary * _itemsDict;
    long long  _totalPurgeable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updateLock;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)cacheDeleteDict;
- (void)dealloc;
- (id)init;
- (void)refreshPurgeableSpace;
- (void)startMonitor;
- (void)stopMonitor;
- (long long)totalPurgeable;

@end
