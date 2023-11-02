
@interface TRIXPCStatusRequestHandler : NSObject <TRIXPCStatusServiceProtocol> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    TRIXPCServerContextPromise * _promise;
}

- (void).cxx_destruct;
- (void)activeEvaluationsForBMLTWithCompletion:(id /* block */)arg1;
- (void)activeEvaluationsForMLRuntimeWithCompletion:(id /* block */)arg1;
- (void)bmltRecordsWithCompletion:(id /* block */)arg1;
- (void)evaluationHistoryRecordsForMLRuntimeWithLimit:(unsigned long long)arg1 newerThanDate:(id)arg2 completion:(id /* block */)arg3;
- (void)experimentHistoryRecordsWithLimit:(unsigned long long)arg1 newerThanDate:(id)arg2 privacyFilterPolicy:(unsigned char)arg3 deploymentEnvironment:(int)arg4 completion:(id /* block */)arg5;
- (void)experimentRecordsWithDeploymentEnvironments:(id)arg1 privacyFilterPolicy:(unsigned char)arg2 completion:(id /* block */)arg3;
- (id)initWithPromise:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (void)rolloutAllocationStatusWithPrivacyFilterPolicy:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)rolloutRecordsWithCompletion:(id /* block */)arg1;

@end
