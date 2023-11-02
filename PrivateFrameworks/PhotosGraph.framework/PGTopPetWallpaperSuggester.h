
@interface PGTopPetWallpaperSuggester : PGPetWallpaperSuggester <PGPetWallpaperSuggesterProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGPetWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGPetWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)filtersForTopSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
