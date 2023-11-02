
@interface SSUIRunPPTServiceRequest : SSUIServiceRequest {
    unsigned long long  _numberOfRequiredScreenshots;
    NSString * _testName;
}

@property (nonatomic) unsigned long long numberOfRequiredScreenshots;
@property (nonatomic, copy) NSString *testName;

+ (id)entitlement;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (unsigned long long)numberOfRequiredScreenshots;
- (void)setNumberOfRequiredScreenshots:(unsigned long long)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
