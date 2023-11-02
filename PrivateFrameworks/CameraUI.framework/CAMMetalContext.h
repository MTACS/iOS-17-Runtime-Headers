
@interface CAMMetalContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;

- (void).cxx_destruct;
- (id)commandQueue;
- (id)device;
- (id)init;

@end
