
@interface MTLIOAccelFence : _MTLFence <MTLFenceSPI> {
    MTLIOAccelDevice<MTLDevice> * _device;
    unsigned int  _fenceIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 fenceIndex:(unsigned int)arg2;

@end
