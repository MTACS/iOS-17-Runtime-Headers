
@interface TSDMetalContext : NSObject {
    <MTLCommandBuffer> * _commandBuffer;
    <MTLCommandQueue> * _commandQueue;
    unsigned long long  _currentBuffer;
    struct CGColorSpace { } * _destinationColorSpace;
    <MTLDevice> * _device;
    struct CGSize { 
        double width; 
        double height; 
    }  _layerSize;
    MTLRenderPassDescriptor * _passDescriptor;
    unsigned long long  _pixelFormat;
    <MTLRenderCommandEncoder> * _renderEncoder;
    NSMutableSet * _retainedObjects;
    TSDMetalShader * _shader;
    struct { 
        double currentTime; 
        double displayLinkPresentationTime; 
        double elapsedShowTime; 
    }  _timingInfo;
}

@property (nonatomic) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic) <MTLCommandQueue> *commandQueue;
@property (nonatomic) unsigned long long currentBuffer;
@property (nonatomic) struct CGColorSpace { }*destinationColorSpace;
@property (nonatomic) <MTLDevice> *device;
@property (nonatomic) struct CGSize { double x1; double x2; } layerSize;
@property (nonatomic) MTLRenderPassDescriptor *passDescriptor;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) <MTLRenderCommandEncoder> *renderEncoder;
@property (nonatomic, retain) NSMutableSet *retainedObjects;
@property (nonatomic) TSDMetalShader *shader;
@property (nonatomic) struct { double x1; double x2; double x3; } timingInfo;

- (void).cxx_destruct;
- (id)commandBuffer;
- (id)commandQueue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentBuffer;
- (struct CGColorSpace { }*)destinationColorSpace;
- (id)device;
- (struct CGSize { double x1; double x2; })layerSize;
- (id)passDescriptor;
- (unsigned long long)pixelFormat;
- (id)renderEncoder;
- (void)retainObject:(id)arg1;
- (id)retainedObjects;
- (void)setCommandBuffer:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setCurrentBuffer:(unsigned long long)arg1;
- (void)setDestinationColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setDevice:(id)arg1;
- (void)setLayerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPassDescriptor:(id)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setRenderEncoder:(id)arg1;
- (void)setRetainedObjects:(id)arg1;
- (void)setShader:(id)arg1;
- (void)setTimingInfo:(struct { double x1; double x2; double x3; })arg1;
- (id)shader;
- (struct { double x1; double x2; double x3; })timingInfo;

@end
