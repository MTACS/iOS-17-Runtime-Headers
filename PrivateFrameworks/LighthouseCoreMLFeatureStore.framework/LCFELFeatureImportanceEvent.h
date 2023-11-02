
@interface LCFELFeatureImportanceEvent : NSObject {
    NSError * _analysisError;
    NSUUID * _contextId;
    NSUUID * _eventId;
    LCFELBatchProviderInfo * _inputBachProviderInfo;
    NSArray * _results;
    NSNumber * _succeeded;
    NSString * _targetLabelFeatureName;
}

@property (nonatomic, readonly) NSError *analysisError;
@property (nonatomic, readonly) NSUUID *contextId;
@property (nonatomic, readonly) NSUUID *eventId;
@property (nonatomic, readonly) LCFELBatchProviderInfo *inputBachProviderInfo;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSNumber *succeeded;
@property (nonatomic, readonly) NSString *targetLabelFeatureName;

- (void).cxx_destruct;
- (id)analysisError;
- (id)contextId;
- (id)eventId;
- (id)init:(id)arg1 targetLabelFeatureName:(id)arg2 results:(id)arg3 succeeded:(id)arg4 analysisError:(id)arg5;
- (id)inputBachProviderInfo;
- (id)results;
- (id)succeeded;
- (id)targetLabelFeatureName;

@end
