
@protocol PGPetWallpaperSuggesterProtocol <PGWallpaperSuggesterProtocol>

@required

- (PGPetWallpaperSuggesterFilteringContext *)primaryFilteringContext;
- (PGPetWallpaperSuggesterFilteringContext *)secondaryFilteringContext;
- (void)setPrimaryFilteringContext:(PGPetWallpaperSuggesterFilteringContext *)arg1;
- (void)setSecondaryFilteringContext:(PGPetWallpaperSuggesterFilteringContext *)arg1;

@end
