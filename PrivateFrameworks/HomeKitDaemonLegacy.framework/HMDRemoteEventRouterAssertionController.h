
@interface HMDRemoteEventRouterAssertionController : NSObject <HMDRemoteEventRouterClientActiveStateDelegate, HMDRemoteEventRouterProcessStateChangeAssertionDataSource, HMFLogging> {
    HMDRemoteEventRouterProcessStateChangeAssertion * _appStateChangeAssertion;
    NSHashTable * _clients;
    NSHashTable * _daemonAssertions;
    bool  _isPluggedIn;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
    <HMETimerProvider> * _timerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)assertionDidBecomeInactive:(id)arg1;
- (void)configure;
- (id)createEventRouterAssertion;
- (void)handleConnectionActiveStateChange:(id)arg1;
- (void)handleProcessStateChange:(id)arg1;
- (id)initWithQueue:(id)arg1 notificationCenter:(id)arg2;
- (void)registerClient:(id)arg1;
- (id)takeEventRouterAssertion;

@end
