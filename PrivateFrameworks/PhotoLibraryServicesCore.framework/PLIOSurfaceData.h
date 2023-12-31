
@interface PLIOSurfaceData : NSData {
    const void * _bytes;
    unsigned long long  _length;
    struct __IOSurface { } * _surface;
}

+ (id)dataWithIOSurface:(void*)arg1;

- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithIOSurface:(void*)arg1;
- (id)initWithIOSurface:(void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;

@end
