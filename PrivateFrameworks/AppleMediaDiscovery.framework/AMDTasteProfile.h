
@interface AMDTasteProfile : NSManagedObject

@property (nonatomic) short domain;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic) long long lastUpdated;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, retain) NSData *value;

+ (id)deleteAll:(id*)arg1;
+ (id)deleteAppInfoEntries:(id*)arg1;
+ (id)deleteEntriesOfFeature:(id)arg1 withDomain:(long long)arg2 error:(id*)arg3;
+ (id)deleteWithPredicates:(id)arg1 error:(id*)arg2;
+ (id)fetchRequest;
+ (id)fetchTasteProfile:(id*)arg1;
+ (id)getEntries:(id)arg1 error:(id*)arg2;
+ (id)getFeatureValueWithName:(id)arg1 inDomain:(id)arg2 error:(id*)arg3;
+ (id)getFeatureWithName:(id)arg1 inDomain:(id)arg2 withColumnName:(id)arg3 error:(id*)arg4;
+ (id)getPurchasedAppsSet:(id*)arg1;
+ (id)getPurchasedArcadeGamesSet:(id*)arg1;
+ (id)getStorefrontIdForDomain:(id)arg1;
+ (id)getUserIdForDomain:(id)arg1;
+ (bool)hasArcade:(id*)arg1;
+ (id)refreshAggregationTasteProfileForDomain:(id)arg1 forUser:(id)arg2 andStoreFrontId:(unsigned int)arg3 error:(id*)arg4;
+ (id)refreshAppInformationTasteProfile:(id*)arg1;
+ (void)refreshCToLMaps;
+ (id)refreshServerTasteProfile:(id)arg1 error:(id*)arg2;
+ (void)saveMinimalCToLMapForModelId:(id)arg1 usingMapData:(id)arg2 andPurchases:(id)arg3;
+ (id)saveTasteProfileEntriesFromDict:(id)arg1 inDomain:(id)arg2 forSource:(id)arg3 error:(id*)arg4;

@end
