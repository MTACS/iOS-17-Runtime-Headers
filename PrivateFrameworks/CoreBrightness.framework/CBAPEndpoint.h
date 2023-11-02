
@interface CBAPEndpoint : NSObject {
    AFKEndpointInterface * _endpoint;
    NSObject<OS_dispatch_queue> * _epQueue;
    NSObject<OS_os_log> * _logHandle;
    unsigned int  _service;
}

- (id)copyProperty:(id)arg1;
- (void)dealloc;
- (bool)enqueueCommandSync:(int)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 responseObj:(id*)arg4 options:(unsigned int)arg5;
- (unsigned int)findDCPServiceWithName:(id)arg1 role:(id)arg2;
- (id)initWithServiceName:(id)arg1 role:(id)arg2;
- (bool)sendCommand:(int)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3;
- (bool)sendOOBCommand:(int)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3;
- (bool)setProperty:(id)arg1 property:(id)arg2;

@end
