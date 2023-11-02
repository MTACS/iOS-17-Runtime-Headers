
@protocol EDConversationRemoteStorage <NSObject>

@required

- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isInitialized;
- (void)refresh;
- (void)removeDictionaryForKey:(NSString *)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg1 forKey:(NSString *)arg2;
- (NSString *)storageName;
- (bool)synchronize;

@end
