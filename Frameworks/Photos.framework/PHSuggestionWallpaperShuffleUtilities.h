
@interface PHSuggestionWallpaperShuffleUtilities : NSObject

+ (id)allPotentialSuggestionLocalIdentifierGroupsForPosterConfiguration:(id)arg1 fromSuggestionLocalIdentifiersByFeature:(id)arg2 withRejectedPersonLocalIdentifiers:(id)arg3;
+ (id)allPotentialSuggestionLocalIdentifiersForPosterConfiguration:(id)arg1 fromSuggestionLocalIdentifiersByFeature:(id)arg2 withRejectedPersonLocalIdentifiers:(id)arg3;
+ (id)chosenSuggestionLocalIdentifiersForPosterConfiguration:(id)arg1 fromSuggestionLocalIdentifiersByFeature:(id)arg2 atDate:(id)arg3 usingStrategy:(unsigned long long)arg4 withRejectedPersonLocalIdentifiers:(id)arg5;
+ (id)chosenSuggestionLocalIdentifiersFromGroups:(id)arg1 atDate:(id)arg2;
+ (id)chosenSuggestionLocalIdentifiersIn:(id)arg1 atDate:(id)arg2;
+ (id)chosenSuggestionsForPosterConfiguration:(id)arg1 atDate:(id)arg2 inPhotoLibrary:(id)arg3;
+ (void)enumerateFeaturesOfPosterConfiguration:(id)arg1 withRejectedPersonLocalIdentifiers:(id)arg2 usingBlock:(id /* block */)arg3;
+ (id)matchingSuggestionInternalPredicateForPosterConfiguration:(id)arg1;
+ (id)mediaFromSuggestions:(id)arg1 assetBySuggestionUUID:(id*)arg2;
+ (void)setFeaturedStateOfSuggestions:(id)arg1;
+ (id)suggestionLocalIdentifiersByFeatureForPosterConfiguration:(id)arg1 inPhotoLibrary:(id)arg2;

@end
