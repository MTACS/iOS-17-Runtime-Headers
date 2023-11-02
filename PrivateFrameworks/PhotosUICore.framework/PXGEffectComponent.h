
@interface PXGEffectComponent : PXGComponent <PXGMutableEffectComponent> {
    NSMutableSet * _allEffects;
    <PXGEffectComponentDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_effectById;
}

@property (nonatomic) <PXGEffectComponentDelegate> *delegate;
@property (nonatomic, readonly) const unsigned int*effectIds;
@property (nonatomic, readonly) unsigned int*mutableEffectIds;

+ (unsigned long long)elementSize;

- (void).cxx_destruct;
- (void)cleanupUnusedObjects;
- (id)delegate;
- (void)didUseEffect:(id)arg1;
- (id)effectForId:(unsigned int)arg1;
- (const unsigned int*)effectIds;
- (id)initWithDataStore:(id)arg1;
- (unsigned int*)mutableEffectIds;
- (void)performChanges:(id /* block */)arg1;
- (void)registerEffect:(id)arg1 withEffectId:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (void)unregisterEffectId:(unsigned int)arg1;
- (void)willDestroyEntities:(const struct { unsigned int x1; }*)arg1 count:(long long)arg2;

@end
