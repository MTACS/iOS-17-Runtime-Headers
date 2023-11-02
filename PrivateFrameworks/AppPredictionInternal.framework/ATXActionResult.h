
@interface ATXActionResult : NSObject {
    NSString * _actionKey;
    bool  _hasPredictionItem;
    struct ATXPredictionItem { 
        NSString *key; 
        unsigned long long actionHash; 
        float inputSignals[817]; 
        float score; 
        bool isMediumConfidenceForBlendingLayer; 
        bool isHighConfidenceForBlendingLayer; 
    }  _predictionItem;
    ATXScoredPrediction * _scoredAction;
}

@property (nonatomic, readonly) NSString *actionKey;
@property (nonatomic, readonly) bool isSampledResultForLoggingOnly;
@property (nonatomic, readonly) const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*predictionItem;
@property (nonatomic, readonly) ATXScoredPrediction *scoredAction;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionKey;
- (id)description;
- (id)initForLoggingWithPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg1;
- (id)initWithScoredAction:(id)arg1 predictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg2 actionKey:(id)arg3;
- (bool)isSampledResultForLoggingOnly;
- (const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)predictionItem;
- (id)scoredAction;
- (void)setPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg1;

@end
