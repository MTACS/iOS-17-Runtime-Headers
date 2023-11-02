
@interface HKMHPromptedAssessmentsManager : NSObject <HKMHPromptedAssessmentsManagerClient, HKMHPromptedAssessmentsProviding, _HKXPCExportable> {
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversForPromptedAssessmentUpdate;
- (void)_startObservingWithActivationHandler:(id /* block */)arg1;
- (bool)_synchronouslyStartObservingWithError:(id*)arg1;
- (void)client_promptedAssessmentsManagerDidUpdatePromptedAssessments;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (id)promptedAssessmentsWithError:(id*)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2 activationHandler:(id /* block */)arg3;
- (id)remoteInterface;
- (void)unregisterObserver:(id)arg1;

@end
