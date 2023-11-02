
@interface _ANEProgramForEvaluation : NSObject {
    _ANEDeviceController * _controller;
    long long  _currentAsyncRequestsInFlight;
    unsigned long long  _intermediateBufferHandle;
    unsigned long long  _programHandle;
    BOOL  _queueDepth;
    NSObject<OS_dispatch_semaphore> * _requestsInFlight;
}

@property (nonatomic, readonly) _ANEDeviceController *controller;
@property long long currentAsyncRequestsInFlight;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic, readonly) BOOL queueDepth;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *requestsInFlight;

+ (id)new;
+ (id)programWithController:(id)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(BOOL)arg3;
+ (id)programWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(BOOL)arg3;

- (void).cxx_destruct;
- (id)controller;
- (long long)currentAsyncRequestsInFlight;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithController:(id)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(BOOL)arg3;
- (unsigned long long)intermediateBufferHandle;
- (bool)processInputBuffers:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)processOutputSet:(id)arg1 model:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)processRequest:(id)arg1 model:(id)arg2 qos:(unsigned int)arg3 qIndex:(unsigned long long)arg4 modelStringID:(unsigned long long)arg5 options:(id)arg6 error:(id*)arg7;
- (unsigned long long)programHandle;
- (id)programInferenceOtherErrorForMessage:(struct ANENotificationMessageStruct { int x1; int x2; void *x3; void *x4[4]; unsigned int x5[4]; }*)arg1 model:(id)arg2 methodName:(id)arg3;
- (BOOL)queueDepth;
- (id)requestsInFlight;
- (void)setCurrentAsyncRequestsInFlight:(long long)arg1;
- (void)setIntermediateBufferHandle:(unsigned long long)arg1;
- (void)setProgramHandle:(unsigned long long)arg1;

@end
