
@interface _TVContentRatingSystemUtilities : NSObject

+ (id)_cleanedRatingSystem:(id)arg1;
+ (bool)_isRatingSystemForMovies:(long long)arg1;
+ (bool)_isRatingSystemForMusic:(long long)arg1;
+ (bool)_isRatingSystemForTV:(long long)arg1;
+ (id)_ratingSystemLookUpDictionary;
+ (id)_ratingSystemStringLookUpDictionary;
+ (long long)ratingSystemForString:(id)arg1;
+ (long long)ratingSystemKindForRatingSystem:(long long)arg1;
+ (id)stringForRatingSystem:(long long)arg1;

@end
