
@interface PGTopPeopleWallpaperSuggester : PGPeopleWallpaperSuggester <PGPeopleWallpaperSuggesterProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGPeopleWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGPeopleWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)filtersForTopSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
