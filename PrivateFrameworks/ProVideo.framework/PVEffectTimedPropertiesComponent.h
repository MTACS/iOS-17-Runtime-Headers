
@interface PVEffectTimedPropertiesComponent : PVEffectComponent <PVEffectTimedProperties> {
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { 
        struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _delegateCollectionLock;
    NSMutableSet * _delegateWrappers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTimedPropertiesDelegate:(id)arg1 userContext:(id)arg2;
- (void)addTimedPropertiesDelegateWrapper:(id)arg1;
- (bool)addTimedPropertiesToDict:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)applyTimedPropertiesForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)delegateWrappers;
- (void)effectDidLoad:(id)arg1 isReady:(bool)arg2;
- (void)effectDidUnload:(id)arg1;
- (bool)hasTimedPropertiesDelegate:(id)arg1;
- (bool)hasTimedPropertiesDelegates;
- (id)initWithEffect:(id)arg1;
- (void)removeAllTimedPropertiesDelegates;
- (void)removeTimedPropertiesDelegate:(id)arg1;
- (id)timedPropertiesDelegates;
- (id)userContextForTimedPropertiesDelegate:(id)arg1;

@end
