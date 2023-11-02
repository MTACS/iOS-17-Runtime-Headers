
@interface AFKEndpointInterface : NSObject {
    struct IONotificationPort { } * _asyncPort;
    id /* block */  _commandHandler;
    id /* block */  _commandHandlerWithReturn;
    unsigned int  _connect;
    struct _IODataQueueMemory { unsigned int x1; unsigned int x2; unsigned int x3; struct _IODataQueueEntry { unsigned int x_4_1_1; unsigned char x_4_1_2[4]; } x4[1]; } * _dataQueue;
    NSObject<OS_dispatch_mach> * _dataQueueMachChannel;
    unsigned int  _dataQueuePort;
    unsigned long long  _dataQueueSize;
    id /* block */  _descriptorHandler;
    NSSet * _descriptorManagers;
    id /* block */  _eventHandler;
    NSMutableDictionary * _properties;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _regID;
    id /* block */  _reportHandler;
    id /* block */  _responseHandler;
    unsigned int  _service;
    NSObject<OS_dispatch_source> * _source;
    unsigned int  _state;
}

@property (nonatomic, readonly) unsigned long long regID;

+ (id)withService:(unsigned int)arg1;
+ (id)withService:(unsigned int)arg1 properties:(id)arg2;

- (void).cxx_destruct;
- (void)_cancel;
- (void)activate;
- (void)activate:(unsigned int)arg1;
- (void)asyncCallback:(struct AsyncContext { void *x1; void *x2; unsigned long long x3; id x4; }*)arg1 result:(int)arg2 timestamp:(unsigned long long)arg3 bufferSize:(unsigned long long)arg4;
- (void)cancel;
- (void)dealloc;
- (void)dequeueDataMessage;
- (int)enqueueCommand:(unsigned int)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 outputPayloadSize:(unsigned long long)arg4 context:(void*)arg5 options:(unsigned int)arg6;
- (int)enqueueCommand:(unsigned int)arg1 timestamp:(unsigned long long)arg2 inputBuffer:(const void*)arg3 inputBufferSize:(unsigned long long)arg4 outputPayloadSize:(unsigned long long)arg5 context:(void*)arg6 options:(unsigned int)arg7;
- (int)enqueueCommandSync:(unsigned int)arg1 timestamp:(unsigned long long)arg2 inputBuffer:(const void*)arg3 inputBufferSize:(unsigned long long)arg4 responseTimestamp:(unsigned long long*)arg5 outputBuffer:(void*)arg6 inOutBufferSize:(unsigned long long*)arg7 options:(unsigned int)arg8;
- (int)enqueueDescriptor:(id)arg1 packetType:(unsigned int)arg2 timestamp:(unsigned long long)arg3 options:(unsigned int)arg4;
- (int)enqueueReport:(unsigned int)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 options:(unsigned int)arg4;
- (int)enqueueReport:(unsigned int)arg1 timestamp:(unsigned long long)arg2 inputBuffer:(const void*)arg3 inputBufferSize:(unsigned long long)arg4 options:(unsigned int)arg5;
- (int)enqueueResponseForContext:(void*)arg1 status:(int)arg2 outputBuffer:(void*)arg3 outputBufferSize:(unsigned long long)arg4 options:(unsigned int)arg5;
- (int)enqueueResponseForContext:(void*)arg1 status:(int)arg2 timestamp:(unsigned long long)arg3 outputBuffer:(void*)arg4 outputBufferSize:(unsigned long long)arg5 options:(unsigned int)arg6;
- (id)initWithService:(unsigned int)arg1;
- (unsigned long long)regID;
- (void)setCommandHandler:(id /* block */)arg1;
- (void)setCommandHandlerWithReturn:(id /* block */)arg1;
- (void)setDescriptorHandler:(id /* block */)arg1;
- (void)setDescriptorManagers:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setReportHandler:(id /* block */)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (int)startSession:(bool)arg1;

@end
