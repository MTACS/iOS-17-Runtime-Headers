
@interface SRUIFTrialManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    TRIClient * _trialClient;
    NSString * _trialNamespaceName;
    int  _trialProjectId;
}

- (void).cxx_destruct;
- (void)_initializeTrialClient;
- (id)_levelForFactor:(id)arg1;
- (void)_refreshTreatments;
- (void)boolValueForFactor:(id)arg1 defaultValue:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithNamespace:(id)arg1;
- (id)initWithNamespace:(id)arg1 projectId:(int)arg2;

@end
