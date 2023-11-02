
@interface STStorageDataNotifier : NSObject {
    NSMutableDictionary * _changes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changesLock;
}

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (void)_notify:(id)arg1;
- (id)init;
- (void)notify:(id)arg1;
- (void)notify:(id)arg1 forBundleIDs:(id)arg2;
- (void)postAppSizesChanged:(id)arg1;
- (void)postAppsAdded:(id)arg1;
- (void)postAppsRemoved:(id)arg1;
- (void)postAppsStateChanged:(id)arg1;
- (void)postLoadingComplete;
- (void)postMediaSizesChanged;
- (void)postTipsChanged;

@end
