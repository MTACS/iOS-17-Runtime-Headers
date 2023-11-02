
@interface CalMockPreferenceStore : NSObject <CalPreferencesStore> {
    NSMutableDictionary * _keys;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _path;
    NSMutableDictionary * _values;
}

+ (id)decodeKeysDictionary:(id)arg1;
+ (id)encodeKeysDictionary:(id)arg1;
+ (id)inMemoryStore;
+ (id)preferencesStoreForPath:(id)arg1;
+ (id)storagePathForDirectory:(id)arg1;

- (void).cxx_destruct;
- (bool)_getValue:(id*)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)_setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (bool)getBoolean:(bool*)arg1 forDomain:(id)arg2 key:(id)arg3;
- (bool)getInteger:(long long*)arg1 forDomain:(id)arg2 key:(id)arg3;
- (bool)getValue:(id*)arg1 forDomain:(id)arg2 key:(id)arg3;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)synchronizeDomain:(id)arg1;

@end
