
@protocol CNFavoritesLogger <NSObject>

@required

- (void)failedToConvertFavoritesToPropertyList:(NSError *)arg1;
- (void)failedToReadFavoritesFromPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(bool)arg3;
- (void)failedToReadRemoteFavorites:(NSError *)arg1;
- (void)failedToVerifyFavorites:(NSArray *)arg1 withPropertyListFavorites:(NSArray *)arg2 error:(NSError *)arg3;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(NSString *)arg1;
- (void)failedToWriteFavoritesToPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(bool)arg3;
- (void)failedToWriteRemoteFavorites:(NSError *)arg1;
- (void)finishedReadingFavoritesFromPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedReadingRemoteFavorites;
- (void)finishedWritingFavoritesToPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)readingFavorites:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)rematchingFavorites:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)writingFavorites:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*

@end
