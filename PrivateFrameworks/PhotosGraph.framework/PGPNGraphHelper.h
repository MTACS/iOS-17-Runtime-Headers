
@interface PGPNGraphHelper : NSObject

+ (double)_confidenceForMePersonLocalIdentifier:(id)arg1 withPersonClusters:(id)arg2 inPhotoLibrary:(id)arg3;
+ (id)_createSocialGraphWithPersonClusterManager:(id)arg1 persons:(id)arg2 moments:(id)arg3 inferredMePersonLocalIdentifier:(id*)arg4 updateBlock:(id /* block */)arg5;
+ (id)_socialGroupsLocalIdentifiersInGraph:(id)arg1 includeMeNode:(bool)arg2 includeCouples:(bool)arg3 includeInvalid:(bool)arg4;
+ (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(id /* block */)arg4;
+ (id)multiLevelSocialGroupsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(id /* block */)arg3;
+ (id)socialGroupsOverTheYearsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(id /* block */)arg3;
+ (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(id /* block */)arg3;

@end
