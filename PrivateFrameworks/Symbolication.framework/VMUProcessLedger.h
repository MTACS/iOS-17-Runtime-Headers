
@interface VMUProcessLedger : NSObject

+ (id)_getProcessLedgerDictFromCrashInfo:(unsigned long long)arg1 DataSize:(unsigned long long)arg2;
+ (id)_getProcessLedgerDictFromKernelLedger:(int)arg1;
+ (id)_getProcessLedgerForCore:(id)arg1;
+ (id)ledgerForTask:(unsigned int)arg1;
+ (id)ledgerForVMUTask:(id)arg1;

@end
