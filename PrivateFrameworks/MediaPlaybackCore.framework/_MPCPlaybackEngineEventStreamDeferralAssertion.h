
@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject <MPCPlaybackEngineEventStreamDeferralAssertion> {
    MPCPlaybackEngineEventStream * _eventStream;
    NSString * _identifier;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _reason;
    MSVBlockGuard * _timeoutGuard;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MSVBlockGuard *timeoutGuard;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)eventStream;
- (id)identifier;
- (id)initWithEventStream:(id)arg1 type:(long long)arg2 reason:(id)arg3 timeout:(double)arg4;
- (void)invalidate;
- (bool)invalidated;
- (id)reason;
- (id)timeoutGuard;
- (long long)type;

@end
