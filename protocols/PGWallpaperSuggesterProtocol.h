
@protocol PGWallpaperSuggesterProtocol <NSObject>

@required

+ (bool)filtersForTopSuggestions;

- (void)setupFilteringContexts;

@end
