
@interface VCPMADResourceManager : NSObject {
    long long  _budget;
    NSDate * _inactiveDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _resources;
    VCPTimer * _timer;
    NSObject<OS_os_transaction> * _transaction;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_purgeAllResources;
- (void)_reserveBudget:(long long)arg1;
- (void)_setBudget:(long long)arg1;
- (id)activateResource:(id)arg1;
- (void)checkTimeout;
- (long long)currentBudget;
- (void)deactivateResource:(id)arg1;
- (void)dealloc;
- (id)entryForResource:(id)arg1;
- (id)init;
- (void)purgeAllResources;
- (void)purgeInactiveResources;
- (void)reserveBudget:(long long)arg1;
- (void)reserveBudgetNormalized:(double)arg1;
- (long long)validateCost:(long long)arg1;

@end
