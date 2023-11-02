
@interface GEOTransitRouteUpdateRequester : NSObject {
    NSMutableSet * _inflightRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inflightRequestsLock;
    double  _initialDelay;
    unsigned long long  _maxRetries;
    unsigned long long  _numRetries;
    NSMutableSet * _processedRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _processedRequestsLock;
    double  _requestInterval;
    NSTimer * _updateTimer;
    NSHashTable * _updaters;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updatersLock;
}

@property (nonatomic) double initialDelay;
@property (nonatomic, readonly) NSMutableSet *processedRequests;
@property (nonatomic) double requestInterval;
@property (nonatomic, readonly) NSHashTable *updaters;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cancelAllRequestsIfNeeded;
- (void)_cancelUpdateTimer;
- (void)_handleResponse:(id)arg1 andError:(id)arg2 forRequest:(id)arg3;
- (void)_processRequests;
- (void)_purgeAllObjects;
- (void)_removeRequestsIfApplicable:(id)arg1;
- (id)_requestsForUpdaters:(id)arg1;
- (void)_scheduleUpdateTimerWithInterval:(double)arg1;
- (void)_sendRequestForRequests:(id)arg1;
- (id)_uuidsForRequests:(id)arg1;
- (id)initPrivate;
- (double)initialDelay;
- (id)processedRequests;
- (void)registerRouteUpdater:(id)arg1;
- (double)requestInterval;
- (void)setInitialDelay:(double)arg1;
- (void)setRequestInterval:(double)arg1;
- (void)unregisterRouteUpdater:(id)arg1;
- (id)updaters;

@end
