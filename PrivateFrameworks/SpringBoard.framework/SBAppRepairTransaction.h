
@interface SBAppRepairTransaction : SBTransaction {
    NSSet * _appInfos;
    NSMutableSet * _repairRequests;
    STTelephonyStatusDomain * _telephonyDomain;
}

@property (nonatomic, readonly, copy) NSSet *appInfos;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_completeRequest:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_didComplete;
- (void)_evaluateCompletion;
- (void)_startAppRepairs;
- (id)appInfos;
- (id)initWithApplicationInfos:(id)arg1;

@end
