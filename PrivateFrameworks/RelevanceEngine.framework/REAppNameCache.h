
@interface REAppNameCache : RESingleton {
    NSLock * _lock;
    NSMutableDictionary * _nameCache;
}

- (void).cxx_destruct;
- (id)_init;
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;

@end
