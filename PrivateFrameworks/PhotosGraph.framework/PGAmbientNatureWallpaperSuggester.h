
@interface PGAmbientNatureWallpaperSuggester : PGLandscapeWallpaperSuggester <PGLandscapeWallpaperSuggesterProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGLandscapeWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGLandscapeWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)filtersForAmbientSuggestions;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (void)setupFilteringContexts;

@end
