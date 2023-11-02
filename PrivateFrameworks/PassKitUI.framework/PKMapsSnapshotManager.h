
@interface PKMapsSnapshotManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSURL * _cacheURL;
    NSMutableDictionary * _completionBlockByKey;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fileLock;
    NSFileManager * _fileManager;
    bool  _isSnapshotting;
    NSMutableDictionary * _snapshotCache;
    NSMutableArray * _snapshotCacheKeys;
    NSMutableDictionary * _snapshotOptionsByKey;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    NSMutableArray * _snapshotsKeysToPerform;
}

- (void).cxx_destruct;
- (id)_iconForCacheKey:(id)arg1;
- (id)_iconFromDiskForCacheKey:(id)arg1;
- (void)_processNextRequest;
- (id)init;
- (id)placeholderWithTraitCollection:(id)arg1 completion:(id /* block */)arg2;
- (id)snapshotForDisplayRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 traitCollection:(id)arg3 completion:(id /* block */)arg4;

@end
