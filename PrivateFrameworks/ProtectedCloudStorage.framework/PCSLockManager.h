
@interface PCSLockManager : NSObject {
    NSHashTable * _holders;
    NSObject<OS_os_log> * _log;
    NSHashTable * _observers;
}

@property (retain) NSHashTable *holders;
@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSHashTable *observers;

+ (void)dropAssertion;
+ (bool)holdAssertion;
+ (id)manager;

- (void).cxx_destruct;
- (void)_onlockDropAssertion:(id)arg1;
- (void)dropAssertion:(id)arg1;
- (bool)holdAssertion:(id)arg1;
- (id)holders;
- (id)initManager;
- (id)lockAssertion:(id)arg1;
- (id)log;
- (id)observers;
- (void)removeAssertion:(id)arg1;
- (void)setHolders:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setObservers:(id)arg1;

@end
