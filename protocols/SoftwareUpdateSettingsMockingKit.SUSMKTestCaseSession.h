
@protocol SoftwareUpdateSettingsMockingKit.SUSMKTestCaseSession <NSObject>

@required

+ (<_TtP32SoftwareUpdateSettingsMockingKit20SUSMKTestCaseSession_> *)current;

- (bool)beginTestAndReturnError:(id*)arg1;
- (NSString *)correlationId;
- (long long)currentPhase;
- (bool)endTestWithResult:(long long)arg1 error:(id*)arg2;
- (<SUSMKMockingStrategy> *)strategyForServiceType:(long long)arg1;

@end
