
@interface _SYMultiSuspendableQueue : NSObject <SYStateLoggable> {
    NSMutableArray * _latestResumeBacktraces;
    NSMutableArray * _latestSuspendBacktraces;
    NSString * _logDescriptor;
    NSObject<OS_dispatch_queue> * _queue;
    _Atomic int  _resumeCount;
    unsigned long long  _stateHandle;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int qosClass;
@property (nonatomic, readonly) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (void)barrierAsync:(id /* block */)arg1;
- (void)barrierSync:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(bool)arg3;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(bool)arg3 target:(id)arg4;
- (bool)isSuspended;
- (id)name;
- (unsigned int)qosClass;
- (void)resume;
- (id)stateForLogging;
- (void)suspend;
- (void)sync:(id /* block */)arg1;
- (id)targetQueue;

@end
