
@interface VUIRestrictions : NSObject <VUIRestrictions>

@property (nonatomic, readonly) bool allowsShowingUndownloadedMovies;
@property (nonatomic, readonly) bool allowsShowingUndownloadedTVShows;

+ (id)sharedInstance;

- (bool)allowsShowingUndownloadedMovies;
- (bool)allowsShowingUndownloadedTVShows;

@end
