
@interface GEOConfigStorageCFPrefsReadWrite : GEOConfigStorageCFPrefsReadOnly <GEOConfigStorageReadWrite>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setConfigValue:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
