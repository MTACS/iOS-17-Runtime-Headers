
@interface IMDCKSyncTokenStore : NSObject <SyncTokenStoreProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
+ (void)persistToken:(id)arg1 forKey:(id)arg2;
+ (id)tokenForKey:(id)arg1;

- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
- (void)persistToken:(id)arg1 forKey:(id)arg2;
- (id)tokenForKey:(id)arg1;

@end
