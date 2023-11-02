
@interface CIImageProcessorInOut : NSObject {
    void * _context;
    unsigned long long  _digest;
    CIContext * _metalContext;
    <MTLTexture> * _mtlTexture;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _region;
    struct __IOSurface { } * _surface;
    bool  _surfaceLocked;
    bool  _usesSRGB;
}

@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long digest;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic, readonly) struct __IOSurface { }*surface;
@property (nonatomic, readonly) bool usesSRGBTransferFunction;

- (unsigned long long)bytesPerRow;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)device;
- (unsigned long long)digest;
- (int)format;
- (id)initWithSurface:(struct __IOSurface { }*)arg1 texture:(struct Texture { union { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct { void *x_3_2_1; void *x_3_2_2; } x_1_1_3; } x1; })arg2 digest:(unsigned long long)arg3 allowSRGB:(bool)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 context:(void*)arg6;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })region;
- (struct __IOSurface { }*)surface;
- (bool)usesSRGBTransferFunction;

@end
