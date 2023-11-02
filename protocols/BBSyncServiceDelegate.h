
@protocol BBSyncServiceDelegate <NSObject>

@required

- (void)syncService:(id <BBSyncServiceInterface>)arg1 receivedDismissalDictionaries:(NSArray *)arg2 dismissalIDs:(NSArray *)arg3 inSection:(NSString *)arg4 universalSectionID:(NSString *)arg5 forFeeds:(unsigned long long)arg6;
- (NSString *)syncService:(id <BBSyncServiceInterface>)arg1 universalSectionIdentifierForSectionIdentifier:(NSString *)arg2;

@end
