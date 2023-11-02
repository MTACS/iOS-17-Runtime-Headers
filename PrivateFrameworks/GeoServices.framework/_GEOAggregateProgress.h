
@interface _GEOAggregateProgress : NSProgress {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _observedChildren;
}

- (void).cxx_destruct;
- (void)_update;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (void)dealloc;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (id)initWithTotalUnitCount:(long long)arg1;
- (bool)isIndeterminate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
