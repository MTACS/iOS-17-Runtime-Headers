
@interface LCFELModelTrainingEvent : NSObject {
    LCFELBatchProviderInfo * _bachProviderInfo;
    NSUUID * _contextId;
    NSUUID * _eventId;
    NSString * _modelName;
    NSNumber * _succeeded;
    NSError * _trainingError;
}

@property (nonatomic, readonly) LCFELBatchProviderInfo *bachProviderInfo;
@property (nonatomic, readonly) NSUUID *contextId;
@property (nonatomic, readonly) NSUUID *eventId;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSNumber *succeeded;
@property (nonatomic, readonly) NSError *trainingError;

- (void).cxx_destruct;
- (id)bachProviderInfo;
- (id)contextId;
- (id)eventId;
- (id)init:(id)arg1 batchProviderInfo:(id)arg2 succeeded:(id)arg3 trainingError:(id)arg4;
- (id)modelName;
- (id)succeeded;
- (id)trainingError;

@end
