
@interface CNMockFavoritesLogger : NSObject <CNFavoritesLogger>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)failedToConvertFavoritesToPropertyList:(id)arg1;
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(bool)arg3;
- (void)failedToReadRemoteFavorites:(id)arg1;
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;
- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(bool)arg3;
- (void)failedToWriteRemoteFavorites:(id)arg1;
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedReadingRemoteFavorites;
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)readingFavorites:(id /* block */)arg1;
- (void)rematchingFavorites:(id /* block */)arg1;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)writingFavorites:(id /* block */)arg1;

@end
