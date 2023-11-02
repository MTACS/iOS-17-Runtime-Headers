
@protocol CalPreferencesStore

@required

- (bool)getBoolean:(bool*)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
- (bool)getInteger:(long long*)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
- (bool)getValue:(id*)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
- (void)setValue:(id)arg1 forDomain:(NSString *)arg2 key:(NSString *)arg3;
- (void)synchronizeDomain:(NSString *)arg1;

@end
