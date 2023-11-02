
@interface SUSUIUserDefaultsBasedTestSession : NSObject <SoftwareUpdateSettingsMockingKit.SUSMKTestCaseSession> {
    NSMutableDictionary * _services;
    NSMutableDictionary * _servicesClasses;
    SUSMKUserDefaultsCodedTestCaseSession * _session;
}

@property (nonatomic, readonly, copy) NSString *correlationId;
@property (nonatomic, readonly) long long currentPhase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)current;

- (void).cxx_destruct;
- (bool)beginTestAndReturnError:(id*)arg1;
- (id)correlationId;
- (long long)currentExecutionResult;
- (long long)currentPhase;
- (void)dealloc;
- (bool)endTestWithResult:(long long)arg1 error:(id*)arg2;
- (void)handleChangedPhase:(long long)arg1;
- (void)handlePhaseConfigurationSealed;
- (void)handlePhaseFinished;
- (void)handlePhaseRunning;
- (id)init;
- (id)initWithStoredSession:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (Class)strategyClassForServiceType:(long long)arg1;
- (id)strategyForServiceType:(long long)arg1;

@end
