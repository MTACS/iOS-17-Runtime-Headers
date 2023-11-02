
@interface _SwiftDriverManager : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _driverApprovalStates;
    void client;
    void driverApprovalStatesLock;
    void launchServicesQueue;
    void observerLock;
    void observers;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)driverApprovalStatesForThirdPartyApp:(id)arg1;
- (long long)driverCount;
- (long long)driverCountForAppID:(id)arg1;
- (id)init;
- (void)refresh;
- (void)removeObserver:(id)arg1;
- (void)setDriverState:(id)arg1 approved:(bool)arg2;
- (long long)thirdPartyDriverCount;

@end
