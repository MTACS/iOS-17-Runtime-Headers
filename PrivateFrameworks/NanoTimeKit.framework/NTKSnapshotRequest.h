
@interface NTKSnapshotRequest : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NTKSnapshotLoadState * _lock_loadState;
    unsigned long long  _lock_priority;
    NSHashTable * _lock_tokens;
}

@property (nonatomic, retain) NTKSnapshotLoadState *loadState;
@property (nonatomic, readonly) unsigned long long priority;

- (void).cxx_destruct;
- (id)init;
- (id)loadState;
- (id)observeChangesToLoadStateWithPriority:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (void)observeChangesToLoadStateWithToken:(id)arg1;
- (unsigned long long)priority;
- (void)setLoadState:(id)arg1;
- (void)stopObservingChanges:(id)arg1;
- (void)updatePriority;

@end
