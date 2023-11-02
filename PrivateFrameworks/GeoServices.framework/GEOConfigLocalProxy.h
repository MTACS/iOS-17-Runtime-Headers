
@interface GEOConfigLocalProxy : NSObject <GEOConfigProxy> {
    NSPointerArray * _configStores;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configExpiryForOptions:(unsigned long long)arg1;
- (id)configExpiryForSource:(long long)arg1;
- (id)configStoreForOptions:(unsigned long long)arg1;
- (id)configStoreForSource:(long long)arg1;
- (id)init;

@end
