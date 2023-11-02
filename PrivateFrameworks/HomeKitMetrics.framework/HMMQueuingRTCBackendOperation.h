
@interface HMMQueuingRTCBackendOperation : NSOperation {
    bool  _isRealtime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _messages;
    long long  _operationState;
    <HMMRTCReportingFactory> * _rtcFactory;
    NSString * _serviceName;
    NSUUID * _sessionUUID;
    id /* block */  _staleSessionBlock;
}

@property (nonatomic, readonly) bool isRealtime;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) <HMMRTCReportingFactory> *rtcFactory;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) id /* block */ staleSessionBlock;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)changeOperationState:(long long)arg1;
- (id)initWithMessages:(id)arg1 serviceName:(id)arg2 sessionUUID:(id)arg3 isRealtime:(bool)arg4 rtcFactory:(id)arg5 staleSessionBlock:(id /* block */)arg6;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isRealtime;
- (id)messages;
- (id)rtcFactory;
- (id)serviceName;
- (id)sessionUUID;
- (id /* block */)staleSessionBlock;
- (void)start;

@end
