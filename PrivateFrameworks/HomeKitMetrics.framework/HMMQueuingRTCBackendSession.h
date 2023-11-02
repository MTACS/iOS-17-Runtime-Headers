
@interface HMMQueuingRTCBackendSession : NSObject <HMMRTCBackendSession> {
    bool  _isOpen;
    bool  _isRealtime;
    double  _lastEventTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _queuedEvents;
    NSString * _serviceName;
    NSUUID * _sessionUUID;
    <_HMMLogBackendSubmitterDelegate> * _submitter;
    id /* block */  _timeSourceBlock;
}

@property (nonatomic, readonly) bool isRealtime;
@property (nonatomic, readonly) double lastEventTime;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) <_HMMLogBackendSubmitterDelegate> *submitter;
@property (nonatomic, readonly) id /* block */ timeSourceBlock;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 sessionUUID:(id)arg2 isRealtime:(bool)arg3 submitter:(id)arg4 timeSourceBlock:(id /* block */)arg5;
- (bool)isRealtime;
- (double)lastEventTime;
- (bool)sendMessage:(id)arg1;
- (id)serviceName;
- (id)sessionUUID;
- (id)submitter;
- (id /* block */)timeSourceBlock;

@end
