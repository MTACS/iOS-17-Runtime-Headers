
@interface PLFileSystemVolumeUnmountMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    NSURL * _volumeURL;
}

- (void).cxx_destruct;
- (void)addVolumeUnmountObserver:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithVolumeURL:(id)arg1;
- (void)removeVolumeUnmountObserver:(id)arg1;

@end
