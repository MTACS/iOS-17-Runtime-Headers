
@interface VIImage : NSObject <VIImageContent> {
    unsigned int  _orientation;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) Class superclass;

+ (id)imageWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLoaded;
- (unsigned int)orientation;
- (struct __CVBuffer { }*)pixelBuffer;

@end
