
@interface FeatureStoreUtils : NSObject

+ (id)extractJSONStringFromFSFFeature:(id)arg1;
+ (id)getEventsFromStreamName:(id)arg1;
+ (id)getEventsFromStreamName:(id)arg1 starting:(id)arg2 ending:(id)arg3;
+ (bool)insertCurareEvaluationToFeatureStore:(id)arg1 streamId:(id)arg2 interactionId:(id)arg3;
+ (bool)insertDictionaryToFeatureStore:(id)arg1 streamId:(id)arg2 interactionId:(id)arg3;

- (id)init;

@end
