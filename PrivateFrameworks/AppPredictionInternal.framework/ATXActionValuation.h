
@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache * _intentCache;
}

- (void).cxx_destruct;
- (id)getCurrentLocation;
- (id)init;
- (id)initWithIntentCache:(id)arg1;
- (void)scoreActions:(id)arg1 scoreLogger:(id)arg2 consumerSubType:(unsigned char)arg3;
- (void)setFeatureValuesAndFilterPredictableActions:(id)arg1 actionStatistics:(id)arg2;
- (bool)shouldPredictCreateEventIntent:(id)arg1;
- (bool)shouldPredictIntent:(id)arg1;
- (bool)shouldPredictRequestRideIntent:(id)arg1;
- (bool)shouldPredictSendMessageIntent:(id)arg1;

@end
