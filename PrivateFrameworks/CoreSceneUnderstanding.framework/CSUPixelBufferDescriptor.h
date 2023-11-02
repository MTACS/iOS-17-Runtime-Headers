
@interface CSUPixelBufferDescriptor : NSObject {
    unsigned long long  _bytesPerRowAlignment;
    unsigned long long  _height;
    bool  _isIOSurfaceBacked;
    unsigned int  _pixelFormat;
    unsigned long long  _width;
}

@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long height;
@property (nonatomic) bool isIOSurfaceBacked;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long width;

- (unsigned long long)bytesPerRowAlignment;
- (struct __CVBuffer { }*)createNewBuffer:(id*)arg1;
- (unsigned long long)height;
- (bool)isIOSurfaceBacked;
- (unsigned int)pixelFormat;
- (void)setBytesPerRowAlignment:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setIsIOSurfaceBacked:(bool)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
