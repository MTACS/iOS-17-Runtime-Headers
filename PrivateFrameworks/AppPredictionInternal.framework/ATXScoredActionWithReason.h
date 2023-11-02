
@interface ATXScoredActionWithReason : NSObject {
    NSString * _reason;
    ATXScoredPrediction * _scoredAction;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) ATXScoredPrediction *scoredAction;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredAction:(id)arg1 predictionReason:(id)arg2;
- (id)reason;
- (id)scoredAction;

@end
