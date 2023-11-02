
@interface ATXAnchorModelModePredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction * _anchorModelPrediction;
    BMUserFocusComputedModeStream * _modeStream;
    NSArray * _serializedTriggers;
}

@property (nonatomic, retain) NSArray *serializedTriggers;

- (void).cxx_destruct;
- (id)_triggerForAnchorType;
- (id)initWithAnchorModelPrediction:(id)arg1;
- (id)serializedTriggers;
- (void)setSerializedTriggers:(id)arg1;
- (bool)shouldPredictAnchorModelModePrediction;

@end
