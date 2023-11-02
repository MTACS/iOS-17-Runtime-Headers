
@interface GEOConfigStorageExpiryCached : NSObject <GEOConfigStorageExpiry> {
    NSDictionary * _cachedValues;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _options;
}

- (void).cxx_destruct;
- (id)_expiryForKey:(id)arg1;
- (void)clearConfigKeyExpiry:(id)arg1;
- (id)getAllExpiringKeys;
- (bool)getConfigKeyExpiry:(id)arg1 date:(id*)arg2 osVersion:(id*)arg3;
- (bool)getConfigKeyIsExpired:(id)arg1;
- (id)initForSource:(long long)arg1;
- (void)resync;
- (void)setConfigKeyExpiry:(id)arg1 date:(id)arg2 osVersion:(id)arg3;

@end
