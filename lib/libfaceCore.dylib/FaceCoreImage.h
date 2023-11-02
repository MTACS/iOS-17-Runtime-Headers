
@interface FaceCoreImage : NSObject {
    char * _alignedDataBuffer;
    unsigned long long  _bytesPerRow;
    bool  _freeWhenDone;
    unsigned long long  _height;
    char * _rawDataBuffer;
    unsigned long long  _width;
}

@property (readonly) char *alignedImageData;
@property (readonly) unsigned long long bytesPerRow;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long width;

- (char *)alignedImageData;
- (unsigned long long)bytesPerRow;
- (void)dealloc;
- (unsigned long long)height;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(void*)arg4 freeWhenDone:(bool)arg5;
- (unsigned long long)width;

@end
