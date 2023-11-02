
@interface ATXActionPredictionContainer : NSObject <ATXScoredPredictionProtocol, NSCopying> {
    NSString * _actionKey;
    _PASLock * _lock;
    ATXMinimalSlotResolutionParameters * _parameters;
    struct ATXPredictionItem { 
        NSString *key; 
        unsigned long long actionHash; 
        float inputSignals[817]; 
        float score; 
        bool isMediumConfidenceForBlendingLayer; 
        bool isHighConfidenceForBlendingLayer; 
    }  _predictionItem;
}

@property (nonatomic, readonly) NSString *actionKey;
@property (nonatomic) struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; } predictionItem;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionKey;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMinimalSlotResolutionParameters:(id)arg1 score:(float)arg2 actionKey:(id)arg3;
- (id)initWithScoredAction:(id)arg1 slotSet:(id)arg2 actionKey:(id)arg3;
- (id)initWithScoredAction:(id)arg1 slotSet:(id)arg2 minimalSlotResolutionParameters:(id)arg3 score:(float)arg4 actionKey:(id)arg5 predictionItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; })arg6;
- (void)initializeScoredActionAndSlotSet;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionPredictionContainer:(id)arg1;
- (struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; })predictionItem;
- (float)score;
- (id)scoredAction;
- (void)setPredictionItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; })arg1;
- (void)setScore:(float)arg1;
- (id)slotSet;

@end
