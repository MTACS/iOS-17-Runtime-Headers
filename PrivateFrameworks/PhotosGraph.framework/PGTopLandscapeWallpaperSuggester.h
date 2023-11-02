
@interface PGTopLandscapeWallpaperSuggester : PGLandscapeWallpaperSuggester <PGLandscapeWallpaperSuggesterProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGLandscapeWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGLandscapeWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)filtersForTopSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
