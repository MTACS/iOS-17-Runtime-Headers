
@interface GEOConfigStorageCached : NSObject <GEOConfigStorageReadWrite> {
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _cacheLock;
    NSDictionary * _cachedValues;
    <GEOConfigStorageReadOnly> * _direct;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isResyncing;
    unsigned long long  _options;
    long long  _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (id)initForSource:(long long)arg1;
- (void)resync;
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
