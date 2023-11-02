
@interface ATXGuardedActionPredictionContainerData : NSObject {
    float  _score;
    ATXScoredPrediction * _scoredAction;
    ATXSlotSet * _slotSet;
}

- (void).cxx_destruct;
- (id)initWithScoredAction:(id)arg1 slotSet:(id)arg2 score:(float)arg3;

@end
