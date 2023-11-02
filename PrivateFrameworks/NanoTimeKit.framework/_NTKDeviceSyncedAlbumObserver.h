
@interface _NTKDeviceSyncedAlbumObserver : NSObject <NPTOCollectionTargetLibraryObserver> {
    NRDevice * _device;
    NPTOCollectionTargetLibrary * _library;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    NSString * _syncedAlbumName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NRDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *syncedAlbumName;

- (void).cxx_destruct;
- (void)_startObserving;
- (void)_stopObserving;
- (void)addObserver:(id)arg1;
- (void)collectionTargetLibraryDidUpdate:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDevice:(id)arg1;
- (id)syncedAlbumName;

@end
