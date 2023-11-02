
@protocol GEOConfigStorageReadOnly <NSObject>

@required

- (id)getConfigValueForKey:(NSString *)arg1 countryCode:(NSString *)arg2 options:(unsigned long long)arg3 source:(long long*)arg4;
- (void)resync;

@end
