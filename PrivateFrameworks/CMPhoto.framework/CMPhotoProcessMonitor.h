
@interface CMPhotoProcessMonitor : NSObject {
    unsigned long long  _assertionHeldToTime;
    NSMutableDictionary * _backgroundNotificationBlocks;
    RBSDomainAttribute * _domainAttribute;
    bool  _gotRBSConnectionError;
    NSMutableDictionary * _heldAssertions;
    RBSAssertion * _latestAssertion;
    NSObject<OS_os_transaction> * _latestTransaction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSProcessMonitor * _processMonitor;
    NSObject<OS_dispatch_queue> * _processMonitorSyncQueue;
}

@property (nonatomic) unsigned long long assertionHeldToTime;
@property (nonatomic, retain) NSMutableDictionary *backgroundNotificationBlocks;
@property (nonatomic, retain) RBSDomainAttribute *domainAttribute;
@property (nonatomic) bool gotRBSConnectionError;
@property (nonatomic, retain) NSMutableDictionary *heldAssertions;
@property (nonatomic, retain) RBSAssertion *latestAssertion;
@property (nonatomic, retain) NSObject<OS_os_transaction> *latestTransaction;
@property (nonatomic, retain) RBSProcessMonitor *processMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processMonitorSyncQueue;

+ (id)getShared;
+ (bool)isForegroundApp;
+ (bool)isManagedByRunningBoard;

- (void)_createRBSMonitorIfNeeded;
- (void)_handleBackgroundingNotification;
- (void)_takeOSTransactionForContext:(void*)arg1;
- (void)_takeRBSAssertionForContext:(void*)arg1 until:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (unsigned long long)assertionHeldToTime;
- (id)backgroundNotificationBlocks;
- (void)dealloc;
- (id)domainAttribute;
- (bool)gotRBSConnectionError;
- (id)heldAssertions;
- (id)init;
- (id)latestAssertion;
- (id)latestTransaction;
- (id)processMonitor;
- (id)processMonitorSyncQueue;
- (int)registerBackgroundNotificationHandlerForContext:(void*)arg1 handler:(id /* block */)arg2;
- (int)releaseAssertionForContext:(void*)arg1;
- (void)setAssertionHeldToTime:(unsigned long long)arg1;
- (void)setBackgroundNotificationBlocks:(id)arg1;
- (void)setDomainAttribute:(id)arg1;
- (void)setGotRBSConnectionError:(bool)arg1;
- (void)setHeldAssertions:(id)arg1;
- (void)setLatestAssertion:(id)arg1;
- (void)setLatestTransaction:(id)arg1;
- (void)setProcessMonitor:(id)arg1;
- (void)setProcessMonitorSyncQueue:(id)arg1;
- (int)takeAssertionUntilTime:(unsigned long long)arg1 forContext:(void*)arg2;
- (int)unregisterBackgroundNotificationForContext:(void*)arg1;
- (void)waitForPendingNotifications;

@end
