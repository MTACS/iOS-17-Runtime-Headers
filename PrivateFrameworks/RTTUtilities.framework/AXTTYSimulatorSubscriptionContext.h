
@interface AXTTYSimulatorSubscriptionContext : CTXPCServiceSubscriptionContext {
    NSUUID * _testUuid;
}

@property (nonatomic, retain) NSUUID *testUuid;

- (void).cxx_destruct;
- (id)init;
- (void)setTestUuid:(id)arg1;
- (id)testUuid;
- (id)uuid;

@end
