
@interface GEOConfigStorageClient : NSObject <GEOConfigStorageReadWrite>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shared;

- (id)_init;
- (id)getAllKeysAndValuesForOptions:(unsigned long long)arg1;
- (void)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 result:(id /* block */)arg4;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (void)getExpiringKeys:(unsigned long long)arg1 result:(id /* block */)arg2;
- (void)resync;
- (void)setConfigKeyExpiry:(id)arg1 options:(unsigned long long)arg2 date:(id)arg3 osVersion:(id)arg4;
- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
