
@protocol IMSyncedSettingsRemoteStorageDelegate <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (id)objectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (bool)synchronize;

@end
