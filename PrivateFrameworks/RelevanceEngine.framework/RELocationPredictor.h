
@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver, RELocationPredictorProperties> {
    RTRoutineManager * _manager;
    NSMutableDictionary * _overrideRoutineType;
    NSMapTable * _routineData;
    NSLock * _routineDataLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *routineDataByEngine;
@property (readonly) Class superclass;

+ (id)supportedFeatures;
+ (double)updateInterval;

- (void).cxx_destruct;
- (id)_init;
- (id)_routineDataForEngine:(id)arg1;
- (void)_setOverrideLocation:(long long)arg1 forEngine:(id)arg2;
- (void)addRelevanceEngine:(id)arg1;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)locationForEngine:(id)arg1 userLocation:(long long)arg2;
- (void)locationManagerDidUpdateLocation:(id)arg1;
- (id)predictedLocationIdentifierForEngine:(id)arg1;
- (id)predictedLocationNameForEngine:(id)arg1;
- (void)removeRelevanceEngine:(id)arg1;
- (id)routineDataByEngine;
- (void)update;

@end
