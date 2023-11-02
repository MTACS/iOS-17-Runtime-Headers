
@protocol WBSDataCache <NSObject>

@required

- (<WBSDataCacheDelegate> *)dataCacheDelegate;
- (long long)entryStateForKeyString:(NSString *)arg1;
- (void)getEntryURLForKeyString:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (bool)isTerminating;
- (void)removeEntriesForKeyStrings:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeEntriesForKeyStringsNotIncludedIn:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSData *)requestEntryForKeyString:(NSString *)arg1;
- (void)reset;
- (void)savePendingChangesBeforeTearDown;
- (void)setDataCacheDelegate:(id <WBSDataCacheDelegate>)arg1;
- (void)setEntry:(void *)arg1 forKeyString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setSetting:(id)arg1 forKey:(NSString *)arg2;
- (void)setUp;
- (id)settingForKey:(NSString *)arg1;

@end
