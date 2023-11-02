
@interface IOGPUMetalCommandQueue : _MTLCommandQueue {
    unsigned long long  _backgroundPriority;
    struct __IOGPUCommandQueue { } * _commandQueue;
    IOGPUMetalDevice<MTLDevice> * _device;
    bool  _disableAsyncCompletionDispatch;
    unsigned long long  _priority;
}

@property (readonly) <MTLDevice> *device;

- (bool)_setGPUPriority:(unsigned long long)arg1 backgroundPriority:(unsigned long long)arg2;
- (void)_submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)device;
- (void)dispatchAvailableCompletionNotifications;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setCompletionQueue:(id)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1;
- (bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (void)setLabel:(id)arg1;
- (void)submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2;

@end