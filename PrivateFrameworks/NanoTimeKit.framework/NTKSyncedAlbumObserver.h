
@interface NTKSyncedAlbumObserver : NSObject {
    NSMutableDictionary * _deviceAlbumObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forDevice:(id)arg2;
- (id)init;
- (void)removeObserver:(id)arg1 forDevice:(id)arg2;
- (id)syncedAlbumNameForDevice:(id)arg1;

@end
