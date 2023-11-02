
@interface GEOConfigStorageFallbackReader : NSObject <GEOConfigStorageReadOnly> {
    NSArray * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (id)initWithStorage:(id)arg1;
- (void)resync;

@end
