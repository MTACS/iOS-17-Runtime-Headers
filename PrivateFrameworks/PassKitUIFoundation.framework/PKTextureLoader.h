
@interface PKTextureLoader : NSObject {
    <MTLBuffer> * _buffer;
    unsigned long long  _bytesPerRow;
    struct vImageConverter { } * _converter;
    struct CGColorSpace { } * _destinationColorSpace;
    struct vImage_CGImageFormat { 
        unsigned int bitsPerComponent; 
        unsigned int bitsPerPixel; 
        struct CGColorSpace {} *colorSpace; 
        unsigned int bitmapInfo; 
        unsigned int version; 
        double *decode; 
        int renderingIntent; 
    }  _destinationFormat;
    <MTLDevice> * _device;
    unsigned long long  _format;
    unsigned long long  _height;
    struct CGImage { } * _image;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct CGColorSpace { } * _sourceColorSpace;
    struct vImage_CGImageFormat { 
        unsigned int bitsPerComponent; 
        unsigned int bitsPerPixel; 
        struct CGColorSpace {} *colorSpace; 
        unsigned int bitmapInfo; 
        unsigned int version; 
        double *decode; 
        int renderingIntent; 
    }  _sourceFormat;
    unsigned long long  _storageMode;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long format;

- (void).cxx_destruct;
- (void)dealloc;
- (void)decode;
- (unsigned long long)format;
- (id)init;
- (void)read:(id /* block */)arg1;

@end
