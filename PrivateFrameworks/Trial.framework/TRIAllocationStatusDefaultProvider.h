
@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider> {
    _PASXPCClientHelper * _clientHelper;
    _PASXPCClientHelper * _internalHelper;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (id)_defaultQueue;
- (id)activeBMLTInformationWithError:(id*)arg1;
- (id)activeExperimentInformationWithError:(id*)arg1;
- (id)addStatusUpdateHandlerForEnvironment:(int)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)dealloc;
- (bool)enumerateActiveExperimentsForEnvironment:(int)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateActiveRolloutsWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)enumerateExperimentStatusesForEnvironment:(int)arg1 privacyFilterPolicy:(unsigned char)arg2 startingFromCursor:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
- (id)enumerateExperimentStatusesForEnvironment:(int)arg1 startingFromCursor:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (id)enumerateExperimentStatusesForTestingPrivacyFilterPolicyWithEnvironment:(int)arg1 startingFromCursor:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateSampledActiveExperimentsForEnvironment:(int)arg1 correlationID:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateSampledActiveRolloutsForCorrelationID:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)init;
- (bool)removeUpdateHandlerForToken:(id)arg1;
- (id)syncProxyWithErrorHandler:(id /* block */)arg1;

@end
