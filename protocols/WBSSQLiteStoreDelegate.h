
@protocol WBSSQLiteStoreDelegate <NSObject>

@required

- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: WBSSQLiteStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sqliteStoreDidFallBackToInMemoryStore:(WBSSQLiteStore *)arg1;

@end
