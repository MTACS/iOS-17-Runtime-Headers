
@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate> {
    CUTWeakReference * _delegate;
    NSArray * _destinations;
    NSMutableArray * _destinationsToQuery;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _destinationsToQuerylock;
    bool  _isDead;
    NSString * _listenerID;
    NSTimer * _nextQueryTimer;
    int  _numberOfQueriesDone;
    CUTWeakReference * _parent;
    NSObject<OS_dispatch_queue> * _queue;
    id  _rateLimiter;
    NSString * _serviceName;
    NSDate * _timeOfDeath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calloutToDelegateWithResult:(id)arg1 error:(id)arg2;
- (void)_invalidateNextQueryTimer;
- (void)_nextQuery:(id)arg1;
- (void)_scheduleNextQuery:(double)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3 parent:(id)arg4;
- (void)invalidate;
- (void)setDestinations:(id)arg1;
- (bool)underLimit;

@end
