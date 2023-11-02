
@protocol PGLandscapeWallpaperSuggesterProtocol <PGWallpaperSuggesterProtocol>

@required

- (PGLandscapeWallpaperSuggesterFilteringContext *)primaryFilteringContext;
- (PGLandscapeWallpaperSuggesterFilteringContext *)secondaryFilteringContext;
- (void)setPrimaryFilteringContext:(PGLandscapeWallpaperSuggesterFilteringContext *)arg1;
- (void)setSecondaryFilteringContext:(PGLandscapeWallpaperSuggesterFilteringContext *)arg1;

@end
