
@interface VisionCoreMetalContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) <MTLLibrary> *library;

+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1;
+ (void)makeBufferCoherent:(id)arg1 buffer:(id)arg2;
+ (void)makeTextureCoherent:(id)arg1 texture:(id)arg2;
+ (id)metalContextAndReturnError:(id*)arg1;

- (void).cxx_destruct;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { }*)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize { double x1; double x2; })arg3 plane:(unsigned long long)arg4;
- (id)commandQueue;
- (void)copyMTLBufferToMTLTexture:(id)arg1 bytesPerRow:(unsigned long long)arg2 texture:(id)arg3;
- (id)device;
- (id)initWithLibrary:(id)arg1 device:(id)arg2 commandQueue:(id)arg3;
- (id)library;
- (id)newBufferWithPixelFormat:(unsigned long long)arg1 width:(int)arg2 data:(const void*)arg3;
- (id)newTextureWithPixelFormat:(unsigned long long)arg1 width:(int)arg2 height:(int)arg3;
- (id)readBufferFromFile:(const char *)arg1 width:(int)arg2 pixelFormat:(unsigned long long)arg3;
- (id)readTextureFromFile:(const char *)arg1 width:(int)arg2 height:(int)arg3 pixelFormat:(unsigned long long)arg4;
- (unsigned long long)textureBytesPerRow:(int)arg1 format:(unsigned long long)arg2;
- (int)writeMetalBufferToFile:(const char *)arg1 buffer:(id)arg2;
- (bool)writeMetalTextureToData:(void*)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;
- (bool)writeMetalTextureToFile:(const char *)arg1 texture:(id)arg2;
- (bool)writeMetalTextureToFile:(const char *)arg1 texture:(id)arg2 mipmapLevel:(int)arg3;

@end
