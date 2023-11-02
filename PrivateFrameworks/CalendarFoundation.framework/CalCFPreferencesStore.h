
@interface CalCFPreferencesStore : NSObject <CalPreferencesStore>

+ (id)shared;

- (bool)getBoolean:(bool*)arg1 forDomain:(id)arg2 key:(id)arg3;
- (bool)getInteger:(long long*)arg1 forDomain:(id)arg2 key:(id)arg3;
- (bool)getValue:(id*)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)synchronizeDomain:(id)arg1;

@end
