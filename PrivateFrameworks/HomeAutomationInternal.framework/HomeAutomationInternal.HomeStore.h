
@interface HomeAutomationInternal.HomeStore : NSObject <HMAccessoryDelegatePrivate, HMHomeDelegatePrivate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate> {
    void _homeManager;
    void cacheRequiresInvalidation;
    void cachedResults;
    void cachedStableHomeGraphHash;
    void homeManagerInitTimeout;
    void initializationSELFPerformanceLogger;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  initializationSignpostID;
    void isCachedStableHomeGraphHashValid;
    void loadSucceeded;
    void loadWaitSemaphores;
    void refreshCompleted;
    void refreshWaitSemaphores;
}

- (void).cxx_destruct;
- (void)accessory:(id)arg1 didAddProfile:(id)arg2;
- (void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidUpdateAssistantIdentifiers:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (void)mediaSystem:(id)arg1 didUpdateConfiguredName:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateName:(id)arg2;

@end
