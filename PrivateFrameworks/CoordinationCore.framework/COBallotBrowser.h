
@interface COBallotBrowser : NSObject <COBrowserProtocol> {
    unsigned long long  _count;
    double  _discoveryDelay;
    NSDictionary * _envelopes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    COBrowserObserverSet * _observerSet;
    CORapportBrowser * _rapportBrowser;
    CORapportTransport * _sourceTransport;
    NSObject<OS_dispatch_source> * _timer;
    bool  _timerEnabled;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double discoveryDelay;
@property (nonatomic, retain) NSDictionary *envelopes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COBrowserObserverSet *observerSet;
@property (nonatomic) CORapportBrowser *rapportBrowser;
@property (nonatomic) CORapportTransport *sourceTransport;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (getter=isTimerEnabled, nonatomic) bool timerEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_addToQueuedRecords:(id)arg1;
- (void)_configureTimer;
- (void)_disableTimer_unsafe;
- (void)_enableTimer_unsafe;
- (void)_informObserversOfDiscoveredRecord:(id)arg1;
- (void)_timerFired;
- (void)_withLock:(id /* block */)arg1;
- (id)addObserverUsingBlock:(id /* block */)arg1;
- (void)clearRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (double)discoveryDelay;
- (void)discoveryUsingBallot:(id)arg1;
- (void)discoveryUsingOnDemandNodeCreationRequest:(id)arg1;
- (id)envelopes;
- (id)initWithDiscoveryDelay:(double)arg1;
- (bool)isTimerEnabled;
- (id)observerSet;
- (id)rapportBrowser;
- (id)registeredObservers;
- (void)removeObserver:(id)arg1;
- (void)setEnvelopes:(id)arg1;
- (void)setRapportBrowser:(id)arg1;
- (void)setSourceTransport:(id)arg1;
- (void)setTimerEnabled:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)sourceTransport;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (id)timer;
- (id)workQueue;

@end
