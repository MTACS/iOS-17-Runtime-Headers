
@protocol HKSPUserDefaults <NSObject>

@required

- (bool)hksp_boolForKey:(NSString *)arg1;
- (NSData *)hksp_dataForKey:(NSString *)arg1;
- (NSDictionary *)hksp_dictionaryRepresentation;
- (NSDictionary *)hksp_dictionaryRepresentationForKeys:(NSSet *)arg1;
- (float)hksp_floatForKey:(NSString *)arg1;
- (long long)hksp_integerForKey:(NSString *)arg1;
- (id)hksp_objectForKey:(NSString *)arg1;
- (void)hksp_removeObjectForKey:(NSString *)arg1;
- (void)hksp_removeObjectsForKeys:(NSSet *)arg1;
- (void)hksp_reset;
- (void)hksp_saveDictionary:(NSDictionary *)arg1;
- (void)hksp_setBool:(bool)arg1 forKey:(NSString *)arg2;
- (void)hksp_setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)hksp_setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (void)hksp_setObject:(id)arg1 forKey:(NSString *)arg2;
- (void)hksp_synchronize;
- (void)hksp_synchronizeKeys:(NSSet *)arg1;

@end
