
@interface HKStringCache : NSObject {
    NSDictionary * _cacheDictionary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)cachedStringIfAvailable:(id)arg1;
- (id)dictionaryReplacingKeysFromDictionary:(id)arg1;
- (void)unittest_resetCache;
- (void)updateCacheWithStrings:(id)arg1;

@end
