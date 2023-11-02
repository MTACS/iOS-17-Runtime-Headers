
@interface AMSAccountsChangedObservable : NSObject {
    ACAccount * _account;
    NSString * _accountTypeIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _notificationsLock;
    AMSObservable * _observable;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSString *accountTypeIdentifier;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } notificationsLock;
@property (nonatomic, retain) AMSObservable *observable;

+ (void)_processChangedAccount:(id)arg1;
+ (id)createdObservables;
+ (id)createdObservablesAccessQueue;
+ (id)sharedInstance;
+ (id)sharedLocalAccountInstance;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_initWithAccount:(id)arg1 accountTypeIdentifier:(id)arg2;
- (void)_processChangedAccount:(id)arg1;
- (bool)_shouldNotifyObserversForChangedAccount:(id)arg1;
- (id)account;
- (id)accountTypeIdentifier;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountTypeIdentifier:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })notificationsLock;
- (id)observable;
- (void)setObservable:(id)arg1;
- (void)subscribe:(id)arg1;
- (void)unsubscribe:(id)arg1;

@end
