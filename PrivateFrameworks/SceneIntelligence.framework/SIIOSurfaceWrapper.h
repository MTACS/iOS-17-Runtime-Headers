
@interface SIIOSurfaceWrapper : NSObject {
    struct __IOSurface { } * _iosurface;
}

@property (nonatomic) struct __IOSurface { }*iosurface;

- (void)dealloc;
- (id)initWithIOSurfaceBuffer:(struct __IOSurface { }*)arg1;
- (id)initWithResolution:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithResolution:(struct CGSize { double x1; double x2; })arg1 pixelformat:(unsigned int)arg2;
- (struct __IOSurface { }*)iosurface;
- (void)setIosurface:(struct __IOSurface { }*)arg1;

@end
