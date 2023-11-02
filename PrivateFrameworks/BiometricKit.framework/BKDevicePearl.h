
@interface BKDevicePearl : BKDevice

@property (nonatomic) <BKDevicePearlDelegate> *delegate;
@property (nonatomic, readonly) long long pearlState;

+ (bool)deviceAvailableWithFailure:(bool*)arg1;

- (bool)clearIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)createEnrollOperationWithError:(id*)arg1;
- (id)createMatchOperationWithError:(id*)arg1;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (long long)deviceEventWithStatus:(unsigned int)arg1;
- (long long)deviceStateWithStatus:(unsigned int)arg1;
- (long long)pearlState;
- (id)periocularMatchStateForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)periocularMatchStateWithError:(id*)arg1;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id*)arg2;
- (void)removePeriocularEnrollmentsForUser:(unsigned int)arg1 identityUUID:(id)arg2 removeAll:(bool)arg3 async:(bool)arg4 reply:(id /* block */)arg5;
- (bool)removePeriocularEnrollmentsForUser:(unsigned int)arg1 removeAll:(bool)arg2 error:(id*)arg3;
- (void)removePeriocularEnrollmentsForUser:(unsigned int)arg1 removeAll:(bool)arg2 reply:(id /* block */)arg3;
- (bool)removePeriocularEnrollmentsFromIdentity:(id)arg1 removeAll:(bool)arg2 error:(id*)arg3;
- (void)removePeriocularEnrollmentsFromIdentity:(id)arg1 removeAll:(bool)arg2 reply:(id /* block */)arg3;
- (bool)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id*)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (id)supportsPeriocularEnrollmentWithError:(id*)arg1;

@end
