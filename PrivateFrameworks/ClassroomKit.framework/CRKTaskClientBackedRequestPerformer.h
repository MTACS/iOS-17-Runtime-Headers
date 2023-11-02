
@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol> {
    CATTaskClient * _taskClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTaskClient *taskClient;

- (void).cxx_destruct;
- (id)initWithTaskClient:(id)arg1;
- (id)operationForRequest:(id)arg1;
- (id)taskClient;

@end
