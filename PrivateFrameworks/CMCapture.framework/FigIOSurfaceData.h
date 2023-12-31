
@interface FigIOSurfaceData : NSData {
    const void * _bytes;
    unsigned long long  _length;
    struct __IOSurface { } * _surface;
}

+ (id)dataWithIOSurface:(struct __IOSurface { }*)arg1;
+ (id)dataWithIOSurface:(struct __IOSurface { }*)arg1 length:(unsigned long long)arg2;
+ (void)initialize;

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;

@end
