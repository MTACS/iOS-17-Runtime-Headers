
@interface LCFELShadowEvaluationEvent : NSObject {
    NSNumber * _accuracy;
    NSUUID * _contextId;
    NSArray * _evaluatedPredictions;
    NSError * _evaluationError;
    NSUUID * _eventId;
    LCFELBatchProviderInfo * _inputBachProviderInfo;
    NSString * _modelName;
    NSNumber * _succeeded;
}

@property (nonatomic, readonly) NSNumber *accuracy;
@property (nonatomic, readonly) NSUUID *contextId;
@property (nonatomic, readonly) NSArray *evaluatedPredictions;
@property (nonatomic, readonly) NSError *evaluationError;
@property (nonatomic, readonly) NSUUID *eventId;
@property (nonatomic, readonly) LCFELBatchProviderInfo *inputBachProviderInfo;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSNumber *succeeded;

- (void).cxx_destruct;
- (id)accuracy;
- (id)contextId;
- (id)evaluatedPredictions;
- (id)evaluationError;
- (id)eventId;
- (id)init:(id)arg1 inputBachProviderInfo:(id)arg2 evaluatedPredictions:(id)arg3 accuracy:(id)arg4 succeeded:(id)arg5 evaluationError:(id)arg6;
- (id)inputBachProviderInfo;
- (id)modelName;
- (id)succeeded;

@end
