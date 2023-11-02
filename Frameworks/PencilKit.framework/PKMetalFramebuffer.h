
@interface PKMetalFramebuffer : NSObject {
    bool  _backedByIOSurface;
    long long  _blendMode;
    bool  _canBeMadeVolatile;
    struct { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  _clearColor;
    <MTLTexture> * _colorTexture;
    <MTLDevice> * _device;
    struct __IOSurface { } * _ioSurface;
    bool  _isVolatile;
    bool  _memoryless;
    long long  _nonVolatileLockCount;
    unsigned long long  _pixelFormat;
    unsigned long long  _sampleCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
