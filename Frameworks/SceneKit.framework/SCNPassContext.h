
@interface SCNPassContext : NSObject {
    struct { struct __C3DFXPass {} *x1; struct __C3DFXTechnique {} *x2; void *x3; struct __C3DEngineContext {} *x4; struct __C3DCullingContext {} *x5; struct __C3DFXProgramObject {} *x6; double x7; void *x8; struct __C3DRendererElement {} *x9; long long x10; unsigned char x11; unsigned char x12; } * _context;
}

@property (nonatomic, readonly) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) double time;

- (id)commandBuffer;
- (id)commandQueue;
- (id)device;
- (id)inputTextureWithName:(id)arg1;
- (id)outputTextureWithName:(id)arg1;
- (double)time;

@end
