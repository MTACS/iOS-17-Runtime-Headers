
@interface _GEOConfigStorageLocalHelper : NSObject <GEOConfigStorageReadWrite> {
    <GEOConfigStorageReadWrite> * _direct;
    long long  _source;
    <GEOConfigStorageReadWrite> * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (id)initWithSource:(long long)arg1 store:(id)arg2 directStore:(id)arg3;
- (void)resync;
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
