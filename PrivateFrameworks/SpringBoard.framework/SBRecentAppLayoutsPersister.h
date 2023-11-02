
@interface SBRecentAppLayoutsPersister : NSObject {
    bool  _initializedNewStoreOnDisk;
    NSObject<OS_dispatch_queue> * _ioQueue;
    NSTimer * _persistTimer;
    NSURL * _persistenceURL;
    NSArray * _recents;
}

@property (nonatomic, readonly) bool initializedNewStoreOnDisk;
@property (nonatomic, retain) NSArray *recents;

- (void).cxx_destruct;
- (void)_enqueueDiskWrite;
- (void)_loadRecents;
- (void)_persistTimerExpired:(id)arg1;
- (void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1;
- (id)_scheduledPersistTimer;
- (id)initWithPersistenceURL:(id)arg1;
- (bool)initializedNewStoreOnDisk;
- (id)recents;
- (void)setRecents:(id)arg1;
- (void)syncToDiskSoonIfDirty;
- (void)syncToDiskSynchronously;

@end
