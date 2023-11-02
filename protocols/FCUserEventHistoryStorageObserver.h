
@protocol FCUserEventHistoryStorageObserver <NSObject>

@required

- (void)storage:(FCUserEventHistoryStorage *)arg1 didClearAllSessions:(NSArray *)arg2;
- (void)storage:(FCUserEventHistoryStorage *)arg1 didStoreData:(NSData *)arg2 forSessionID:(NSString *)arg3;

@end
