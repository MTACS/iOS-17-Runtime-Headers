
@interface CDPCAAccountInfoRepairEffectivenessReporter : CDPCAReporter

- (id)init;
- (void)reportRepairAttemptFailedDueToAuthenticationError:(id)arg1;
- (void)reportRepairAttemptFinishedWithSuccess:(bool)arg1 authenticationError:(id)arg2 accountInfoFetchErrorBeforeRepair:(id)arg3 repairError:(id)arg4 accountInfoFetchErrorAfterRepair:(id)arg5 octagonStatusBefore:(unsigned long long)arg6 octagonStatusAfter:(unsigned long long)arg7 pcsStatusBefore:(unsigned long long)arg8 pcsStatusAfter:(unsigned long long)arg9 escrowKeysStatusBefore:(unsigned long long)arg10 escrowKeysStatusAfter:(unsigned long long)arg11;

@end
