
@interface DAAccountMonitor : NSObject {
    NSHashTable * _accounts;
    NSObject<OS_dispatch_queue> * _accountsQueue;
}

@property (nonatomic, retain) NSHashTable *accounts;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accountsQueue;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)accounts;
- (id)accountsQueue;
- (id)init;
- (void)monitorAccount:(id)arg1;
- (id)monitoredAccounts;
- (void)setAccounts:(id)arg1;
- (void)setAccountsQueue:(id)arg1;
- (void)unmonitorAccount:(id)arg1;

@end
