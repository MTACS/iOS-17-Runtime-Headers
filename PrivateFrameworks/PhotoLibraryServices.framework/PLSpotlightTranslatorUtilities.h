
@interface PLSpotlightTranslatorUtilities : NSObject

+ (id)contentRatingFromScenes:(id)arg1 algorithmVersion:(short)arg2;
+ (id)seasonsForDates:(id)arg1 calendar:(id)arg2 locale:(id)arg3 synonymsBySeason:(id)arg4;
+ (id)spotlightAudioClassificationsFromScenes:(id)arg1;
+ (id)spotlightPersonsFromPLPersons:(id)arg1;
+ (id)spotlightScenesFromDetectionTraits:(id)arg1;
+ (id)spotlightScenesFromScenes:(id)arg1 sceneTaxonomy:(id)arg2;
+ (id)textFromGraphData:(id)arg1 searchIndexCategoryMask:(unsigned long long)arg2;
+ (id)textFromGraphData:(id)arg1 searchIndexCategoryMask:(unsigned long long)arg2 synonymSearchIndexCategoryMask:(unsigned long long)arg3 synonyms:(id)arg4;

@end
