
@interface LCFELChangePointDetectionEvent : NSObject {
    NSError * _analysisError;
    NSUUID * _contextId;
    NSUUID * _eventId;
    LCFELBatchProviderInfo * _inputBachProviderInfo;
    NSArray * _results;
    NSNumber * _succeeded;
}

@property (nonatomic, readonly) NSError *analysisError;
@property (nonatomic, readonly) NSUUID *contextId;
@property (nonatomic, readonly) NSUUID *eventId;
@property (nonatomic, readonly) LCFELBatchProviderInfo *inputBachProviderInfo;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSNumber *succeeded;

- (void).cxx_destruct;
- (id)analysisError;
- (id)contextId;
- (id)eventId;
- (id)init:(id)arg1 results:(id)arg2 succeeded:(id)arg3 analysisError:(id)arg4;
- (id)inputBachProviderInfo;
- (id)results;
- (id)succeeded;

@end
