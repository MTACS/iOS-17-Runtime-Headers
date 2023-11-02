
@protocol IMSyncedSettingsLocalStorageDelegate <NSObject>

@required

- (id)getValueFromDomain:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forDomain:(NSString *)arg2 forKey:(NSString *)arg3;

@end
