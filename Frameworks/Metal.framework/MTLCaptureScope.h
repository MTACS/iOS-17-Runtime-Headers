
@interface MTLCaptureScope : _MTLObjectWithLabel <MTLCaptureScope> {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)beginScope;
- (id)commandQueue;
- (void)dealloc;
- (id)device;
- (void)endScope;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2;

@end
