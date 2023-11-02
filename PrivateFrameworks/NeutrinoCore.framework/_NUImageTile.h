
@interface _NUImageTile : NSObject <NUSharableImage> {
    unsigned long long  _accessCount;
    NSObject<OS_dispatch_queue> * _queue;
    <NUPurgeableStorage> * _storage;
    bool  _wasPurged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_decrementAccessCount;
- (bool)_incrementAccessCount;
- (void)_markAsPurgeable;
- (bool)_markAsUnpurgeable;
- (void)_visitRead:(id /* block */)arg1;
- (unsigned long long)accessCount;
- (long long)copyFromTile:(id)arg1 region:(id)arg2;
- (void)dealloc;
- (bool)decrementAccessCount;
- (void)decrementAccessCountButLeaveAccessedIfLastUse;
- (bool)decrementUseCount;
- (id)description;
- (bool)incrementAccessCount;
- (void)incrementUseCount;
- (id)initWithStorage:(id)arg1;
- (bool)isInUse;
- (bool)isShared;
- (bool)isValid;
- (long long)readStorageInRegion:(id)arg1 block:(id /* block */)arg2;
- (void)returnToStorageFactory:(id)arg1;
- (int)useCount;
- (long long)writeStorageInRegion:(id)arg1 block:(id /* block */)arg2;

@end
