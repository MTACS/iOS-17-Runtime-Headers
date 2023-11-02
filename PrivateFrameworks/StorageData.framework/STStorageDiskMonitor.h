
@interface STStorageDiskMonitor : NSObject {
    long long  _deviceSize;
    NSObject<OS_dispatch_source> * _diskSizeTimer;
    STStorageSpace * _storageSpace;
    long long  _updateDelta;
}

@property (readonly) long long deviceSize;
@property (retain) NSObject<OS_dispatch_source> *diskSizeTimer;
@property (readonly) STStorageSpace *storageSpace;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_sendNotify:(id)arg1;
- (long long)deviceSize;
- (id)diskSizeTimer;
- (id)init;
- (void)sendNotify:(id)arg1;
- (void)setDiskSizeTimer:(id)arg1;
- (void)startMonitor;
- (void)stopMonitor;
- (id)storageSpace;
- (void)sync;
- (void)updateDiskSpace;

@end
