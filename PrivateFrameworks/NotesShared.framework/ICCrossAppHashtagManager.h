
@interface ICCrossAppHashtagManager : NSObject

+ (id)bundleIDsForHashtagSupportingAppsOtherThanNotes;
+ (id)hashtagDisplayTextsFromOtherApps;
+ (void)prefetchHashtagDisplayTextsFromOtherApps;
+ (void)updateUserDefaultsCacheIfNecessaryWithNewlyFetchedHastags:(id)arg1;

@end
