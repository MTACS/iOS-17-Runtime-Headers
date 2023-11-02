
@interface ICSpotlightUtilities : NSObject

+ (id)queryFields;
+ (id)rankingQueryFieldsForGenericHighlighting;
+ (id)rankingQueryFieldsForSorting;
+ (id)rankingQueryFieldsForWordSpecificHighlighting;
+ (unsigned long long)rankingQueryLimit;
+ (id)stringByEscapingSearchString:(id)arg1;
+ (id)userActivityPersistentIdentifierForNote:(id)arg1;

@end
