
@interface HMUserActionPredictionTransformer : NSObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (bool)isValidPredictionForAccessory:(id)arg1 targetServiceIdentifier:(id)arg2;
- (id)matchingAccessoryForDuetAccessoryPrediction:(id)arg1 home:(id)arg2;
- (id)matchingServiceForDuetAccessoryPrediction:(id)arg1 onAccessory:(id)arg2 home:(id)arg3;
- (id)predictionForDuetAccessoryPrediction:(id)arg1 home:(id)arg2;
- (id)predictionForDuetScenePrediction:(id)arg1 home:(id)arg2;
- (id)predictionWithSameTargetGroupAsPrediction:(id)arg1 inPredictions:(id)arg2;
- (id)predictionsWithDuetPredictions:(id)arg1 forHome:(id)arg2;

@end
