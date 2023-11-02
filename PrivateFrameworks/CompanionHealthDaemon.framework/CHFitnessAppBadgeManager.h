
@interface CHFitnessAppBadgeManager : NSObject {
    NSHashTable * _providers;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (long long)_badgeCount;
- (void)_launchFitnessApp;
- (long long)_loadBadgeCount;
- (void)_storeBadgeCount:(long long)arg1;
- (id)init;
- (void)registerProvider:(id)arg1;
- (void)requestBadgeUpdate;
- (void)unregisterProvider:(id)arg1;

@end
