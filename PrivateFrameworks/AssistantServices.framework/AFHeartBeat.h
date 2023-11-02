
@interface AFHeartBeat : NSObject <AFInvalidating> {
    NSDate * _effectiveDate;
    double  _expirationDuration;
    NSObject<OS_dispatch_source> * _expirationTimer;
    id /* block */  _heartBeatHandler;
    double  _heartBeatInterval;
    NSObject<OS_dispatch_source> * _heartBeatTimer;
    NSString * _identifier;
    id /* block */  _invalidationHandler;
    _Atomic unsigned long long  _numberOfHeartBeats;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *effectiveDate;
@property (nonatomic, readonly) double expirationDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heartBeatInterval;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long numberOfHeartBeats;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fire;
- (void)_invalidate;
- (void)dealloc;
- (id)description;
- (id)effectiveDate;
- (double)expirationDuration;
- (double)heartBeatInterval;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 heartBeatInterval:(double)arg5 heartBeatHandler:(id /* block */)arg6 invalidationHandler:(id /* block */)arg7;
- (void)invalidate;
- (unsigned long long)numberOfHeartBeats;

@end
