
@interface ASKRestrictions : NSObject {
    ACAccountStore * _accountStore;
    bool  _hasManagedAppleID;
    bool  _isAccountModificationRestricted;
    bool  _isAppInstallationAllowed;
    bool  _isAppUninstallationAllowed;
    bool  _isRunningInStoreDemoMode;
    long long  _maximumAppContentRating;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) bool hasManagedAppleID;
@property (nonatomic, readonly) bool isAccountModificationRestricted;
@property (nonatomic, readonly) bool isAppInstallationAllowed;
@property (nonatomic, readonly) bool isAppUninstallationAllowed;
@property (nonatomic, readonly) bool isRunningInStoreDemoMode;
@property (nonatomic, readonly) long long maximumAppContentRating;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)accountStore;
- (void)dealloc;
- (bool)hasManagedAppleID;
- (id)initWithAccountStore:(id)arg1;
- (bool)isAccountModificationRestricted;
- (bool)isAppInstallationAllowed;
- (bool)isAppUninstallationAllowed;
- (bool)isRunningInStoreDemoMode;
- (long long)maximumAppContentRating;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)updateRestrictionsAndNotifyIfNeeded;
- (void)updateRestrictionsWithCompletionBlock:(id /* block */)arg1;

@end
