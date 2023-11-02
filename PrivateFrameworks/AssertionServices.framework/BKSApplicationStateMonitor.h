
@interface BKSApplicationStateMonitor : NSObject {
    bool  _elevatedPriority;
    id /* block */  _handler;
    NSArray * _interestedAssertionReasons;
    NSArray * _interestedBundleIDs;
    unsigned int  _interestedStates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBSProcessMonitor * _monitor;
}

@property (nonatomic, readonly) bool elevatedPriority;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly, copy) NSArray *interestedBundleIDs;
@property (nonatomic, readonly) unsigned int interestedStates;

- (void).cxx_destruct;
- (bool)_clientSubscribedToThisReasonChange:(id)arg1;
- (bool)_clientSubscribedToThisStateChange:(id)arg1 state:(id)arg2 prevState:(id)arg3;
- (id)_legacyInfoForProcess:(id)arg1;
- (id)_legacyInfoForProcess:(id)arg1 state:(id)arg2;
- (unsigned int)_legacyStateForProcess:(id)arg1 state:(id)arg2;
- (id)applicationInfoForApplication:(id)arg1;
- (void)applicationInfoForApplication:(id)arg1 completion:(id /* block */)arg2;
- (id)applicationInfoForPID:(int)arg1;
- (void)applicationInfoForPID:(int)arg1 completion:(id /* block */)arg2;
- (unsigned int)applicationStateForApplication:(id)arg1;
- (id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2;
- (void)dealloc;
- (bool)elevatedPriority;
- (id /* block */)handler;
- (id)init;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2 elevatedPriority:(bool)arg3;
- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2 isUserInteractive:(bool)arg3;
- (id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned int)arg3 elevatedPriority:(bool)arg4;
- (id)interestedBundleIDs;
- (unsigned int)interestedStates;
- (void)invalidate;
- (void)lock_updateConfiguration;
- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)updateInterestedAssertionReasons:(id)arg1;
- (void)updateInterestedBundleIDs:(id)arg1;
- (void)updateInterestedBundleIDs:(id)arg1 states:(unsigned int)arg2;
- (void)updateInterestedStates:(unsigned int)arg1;

@end
