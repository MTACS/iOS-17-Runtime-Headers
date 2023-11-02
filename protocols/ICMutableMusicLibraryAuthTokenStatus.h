
@protocol ICMutableMusicLibraryAuthTokenStatus <NSObject>

@required

- (NSError *)lastError;
- (NSDate *)lastUpdatedDate;
- (void)setLastError:(NSError *)arg1;
- (void)setLastUpdatedDate:(NSDate *)arg1;
- (void)setShouldExcludeFromBackgroundRefresh:(bool)arg1;
- (void)setToken:(ICMusicLibraryAuthToken *)arg1;
- (bool)shouldExcludeFromBackgroundRefresh;
- (ICMusicLibraryAuthToken *)token;

@end
