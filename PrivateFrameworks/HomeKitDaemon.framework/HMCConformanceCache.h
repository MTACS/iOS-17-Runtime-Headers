
@interface HMCConformanceCache : HMFObject {
    NSMapTable * _conformanceCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _protocols;
}

- (void).cxx_destruct;
- (bool)classConforms:(Class)arg1;
- (id)initWithProtocol:(id)arg1;
- (id)initWithProtocols:(id)arg1;
- (bool)objectConforms:(id)arg1;
- (void)refreshConformanceOf:(Class)arg1;

@end
