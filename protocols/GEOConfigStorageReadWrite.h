
@protocol GEOConfigStorageReadWrite <GEOConfigStorageReadOnly>

@required

- (void)setConfigValue:(id)arg1 forKey:(NSString *)arg2 options:(unsigned long long)arg3 synchronous:(bool)arg4;

@end
