
@interface _GEOConfigStorageRemote : NSObject <GEOConfigStorageReadOnly>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)getConfigValueForKey:(id)arg1 countryCode:(id)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (void)resync;

@end
