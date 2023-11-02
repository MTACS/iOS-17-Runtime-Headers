
@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary * _predictions;
}

- (void).cxx_destruct;
- (bool)_oldPredictionWithKey:(const char *)arg1 inCriteria:(id)arg2 matchesPredictionWithKey:(id)arg3;
- (id)description;
- (id)init;
- (id)initWithPredictedValuesAndTypes:(id)arg1;
- (bool)matchesXPCActivity:(id)arg1;
- (bool)matchesXPCActivityCriteria:(id)arg1;
- (id)predictedValueForType:(id)arg1;
- (id)redactedDescription;
- (void)updateXPCActivity:(id)arg1;
- (void)updateXPCActivityCriteria:(id)arg1;
- (id)updatedPredictionWithValuesAndTypes:(id)arg1;

@end
