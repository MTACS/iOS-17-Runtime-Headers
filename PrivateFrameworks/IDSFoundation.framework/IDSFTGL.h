
@interface IDSFTGL : IDSGlobalLink

- (bool)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3;
- (bool)_postProcessQUICAllocbindResponse:(id)arg1 candidatePair:(id)arg2;
- (void)_resetRetryCountForCandidatePair:(id)arg1;
- (bool)_setupNewQRLinkIfNecessary:(id)arg1;
- (void)disconnectWithCompletionHandler:(id /* block */)arg1;
- (void)sendSKEData:(id)arg1;
- (void)setDefaultUnderlyingLink:(BOOL)arg1;
- (void)setHasPendingAllocation:(bool)arg1;
- (void)setSharedSessionHasJoined:(bool)arg1;
- (void)startWithOptions:(id)arg1;

@end
