
@interface IETestResult : NSObject {
    NSString * _flowId;
    unsigned long long  _status;
    NSString * _summary;
    NSString * _testName;
}

@property (nonatomic, retain) NSString *flowId;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long status;
@property (nonatomic, retain) NSString *summary;
@property (nonatomic, retain) NSString *testName;

- (void).cxx_destruct;
- (id)flowId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setFlowId:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setSummary:(id)arg1;
- (void)setTestName:(id)arg1;
- (unsigned long long)status;
- (id)summary;
- (id)testName;

@end
