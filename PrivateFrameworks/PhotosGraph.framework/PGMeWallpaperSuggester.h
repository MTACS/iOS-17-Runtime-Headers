
@interface PGMeWallpaperSuggester : PGTopPeopleWallpaperSuggester <PGPeopleWallpaperSuggesterProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PGPeopleWallpaperSuggesterFilteringContext *primaryFilteringContext;
@property (nonatomic, retain) PGPeopleWallpaperSuggesterFilteringContext *secondaryFilteringContext;
@property (readonly) Class superclass;

+ (bool)enableSettlingEffect;
+ (id)suggestionSubtypes;

- (id)personLocalIdentifiersByOriginalPersonLocalIdentifierWithProgress:(id /* block */)arg1;

@end
