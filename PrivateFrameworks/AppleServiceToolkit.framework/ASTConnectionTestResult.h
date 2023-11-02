
@interface ASTConnectionTestResult : ASTMaterializedConnection <ASTTestResultHandling> {
    NSNumber * _testId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *testId;

- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithTestResults:(id)arg1;
- (id)testId;

@end
