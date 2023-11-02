
@protocol FCAudioPlaylistType

@required

- (void)addObserver:(id <FCAudioPlaylistObserving>)arg1;
- (NSArray *)articleIDs;
- (bool)containsArticleID:(NSString *)arg1;
- (NSDate *)dateAddedForArticleID:(NSString *)arg1;
- (void)ensureSyncedWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)insertArticleID:(NSString *)arg1 atIndex:(unsigned long long)arg2;
- (void)removeArticleID:(NSString *)arg1;
- (void)removeObserver:(id <FCAudioPlaylistObserving>)arg1;
- (void)save;

@end
