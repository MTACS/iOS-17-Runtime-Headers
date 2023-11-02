
@protocol PGCityscapeWallpaperSuggesterProtocol <PGWallpaperSuggesterProtocol>

@required

- (PGCityscapeWallpaperSuggesterFilteringContext *)primaryFilteringContext;
- (PGCityscapeWallpaperSuggesterFilteringContext *)secondaryFilteringContext;
- (void)setPrimaryFilteringContext:(PGCityscapeWallpaperSuggesterFilteringContext *)arg1;
- (void)setSecondaryFilteringContext:(PGCityscapeWallpaperSuggesterFilteringContext *)arg1;

@end
