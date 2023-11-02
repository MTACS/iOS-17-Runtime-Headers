
@protocol SBRecentDisplayItemsPersistenceDelegate <NSObject>

@required

- (void)dataStore:(SBRecentDisplayItemsDataStore *)arg1 persistDisplayItems:(NSOrderedSet *)arg2;
- (bool)dataStore:(SBRecentDisplayItemsDataStore *)arg1 shouldRestorePersistedDisplayItem:(SBDisplayItem *)arg2;
- (NSOrderedSet *)persistedDisplayItemsForDataStore:(SBRecentDisplayItemsDataStore *)arg1;

@end
