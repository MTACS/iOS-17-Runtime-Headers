
@protocol PGPeopleWallpaperSuggesterProtocol <PGWallpaperSuggesterProtocol>

@required

- (PGPeopleWallpaperSuggesterFilteringContext *)primaryFilteringContext;
- (PGPeopleWallpaperSuggesterFilteringContext *)secondaryFilteringContext;
- (void)setPrimaryFilteringContext:(PGPeopleWallpaperSuggesterFilteringContext *)arg1;
- (void)setSecondaryFilteringContext:(PGPeopleWallpaperSuggesterFilteringContext *)arg1;

@end
