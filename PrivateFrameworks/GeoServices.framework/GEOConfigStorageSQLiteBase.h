
@interface GEOConfigStorageSQLiteBase : NSObject <GEOConfigStorageReadWrite> {
    GEOConfigPersistence * _persister;
    long long  _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_instanceSpecificGetKey:(id)arg1;
- (id)_instanceSpecificGetKeyPath:(id)arg1;
- (void)_instanceSpecificSetValue:(id)arg1 forKey:(id)arg2;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (void)resync;
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
