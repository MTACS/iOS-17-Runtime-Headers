
@interface BWMetalInferenceContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLCommandQueueSPI> * _commandQueueSPI;
    <MTLDevice> * _device;
    bool  _prepared;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;

- (id)commandQueue;
- (void)dealloc;
- (id)device;
- (id)initWithScheduler:(id)arg1 priority:(unsigned int)arg2;

@end
