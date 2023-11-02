
@interface HMDBonjourBrowserHelper : HMFObject <HMFNetServiceBrowserDelegate, HMFTimerDelegate> {
    NSMutableArray * _browsers;
    NSMutableArray * _browsingCompletions;
    double  _browsingInterval;
    double  _browsingPeriodicity;
    NSMutableDictionary * _internalDiscoveredServices;
    NSDictionary * _latestDiscoveredServices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _serviceTypes;
    unsigned long long  _state;
    HMFTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableArray *browsers;
@property (nonatomic, retain) NSMutableArray *browsingCompletions;
@property (nonatomic) double browsingInterval;
@property (nonatomic) double browsingPeriodicity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *internalDiscoveredServices;
@property (nonatomic, retain) NSDictionary *latestDiscoveredServices;
@property (nonatomic, retain) NSArray *serviceTypes;
@property (getter=isStarted, nonatomic, readonly) bool started;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_addBrowser:(id)arg1;
- (void)_removeBrowser:(id)arg1;
- (bool)_startBrowsers;
- (void)_stopBrowsers;
- (void)_updateTimerWithTimeout:(double)arg1;
- (id)browsers;
- (id)browsingCompletions;
- (double)browsingInterval;
- (double)browsingPeriodicity;
- (unsigned long long)discoveredServicesCountForServiceType:(id)arg1;
- (id)initWithServicesOfTypes:(id)arg1 browsingTimeInterval:(double)arg2 browsingPeriodicity:(double)arg3 workQueue:(id)arg4;
- (id)internalDiscoveredServices;
- (bool)isStarted;
- (id)latestDiscoveredServices;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (id)serviceTypes;
- (void)setBrowsers:(id)arg1;
- (void)setBrowsingCompletions:(id)arg1;
- (void)setBrowsingInterval:(double)arg1;
- (void)setBrowsingPeriodicity:(double)arg1;
- (void)setInternalDiscoveredServices:(id)arg1;
- (void)setLatestDiscoveredServices:(id)arg1;
- (void)setServiceTypes:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (void)startWithBrowsingCompletion:(id /* block */)arg1;
- (unsigned long long)state;
- (void)stop;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
