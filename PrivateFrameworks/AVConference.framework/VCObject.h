
@interface VCObject : NSObject {
    NSString * _logPrefix;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    id  _reportingAgent;
    struct OpaqueFigCFWeakReference { } * _reportingAgentWeak;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _timeoutMutex;
    VCDispatchTimer * _timeoutTimer;
}

@property (nonatomic, retain) NSString *logPrefix;
@property (nonatomic) struct opaqueRTCReporting { }*reportingAgent;

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting { }*)arg3;

- (void)dealloc;
- (id)init;
- (void)lock;
- (id)logPrefix;
- (struct opaqueRTCReporting { }*)reportingAgent;
- (void)setLogPrefix:(id)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)startDeallocTimer;
- (void)startDeallocTimerWithTimeout:(unsigned int)arg1;
- (void)startTerminationTimer:(unsigned int)arg1 terminationType:(int)arg2;
- (void)startTimeoutTimer;
- (void)stopTerminationTimer;
- (void)stopTimeoutTimer;
- (void)unlock;

@end
