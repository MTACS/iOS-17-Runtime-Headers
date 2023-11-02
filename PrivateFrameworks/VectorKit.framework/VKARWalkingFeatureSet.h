
@interface VKARWalkingFeatureSet : NSObject {
    struct _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        NSArray *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _features;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mutex;
    struct _retain_ptr<NSMutableSet<id<VKARWalkingFeatureSetObserver>> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        NSMutableSet *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _observers;
    long long  _state;
    unsigned long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) NSArray *features;
@property (nonatomic) long long state;
@property (nonatomic, readonly) unsigned long long uniqueIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_stateWillChangeFromState:(long long)arg1 nextState:(long long)arg2;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)features;
- (id)initWithFeatures:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (unsigned long long)uniqueIdentifier;

@end
