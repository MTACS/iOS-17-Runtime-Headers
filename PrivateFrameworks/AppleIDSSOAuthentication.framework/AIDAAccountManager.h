
@interface AIDAAccountManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accountManagerLock;
    ACAccountStore * _accountStore;
    NSDictionary * _accounts;
    <AIDAAccountManagerDelegate> * _delegate;
    NSMutableDictionary * _handlerByObserver;
    <AIDAServiceOwnerProtocol> * _serviceOwnersManager;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, copy) NSDictionary *accounts;
@property (nonatomic) <AIDAAccountManagerDelegate> *delegate;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

+ (id)_accountStoreChangeQueue;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (id)_delegate_accountsForAccountManager;
- (id)accountStore;
- (id)accounts;
- (void)addAccountChangeObserver:(id)arg1 handler:(id /* block */)arg2;
- (id)aidaAccountForService:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (void)removeAccountChangeObserver:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)setDelegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider

- (id)dmc_remoteManagementAccount;

@end
