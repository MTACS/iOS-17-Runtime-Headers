
@interface _UIImageCIImageRenderer : NSObject {
    CIContext * _context;
    struct { 
        unsigned int surfaceIsValid : 1; 
        unsigned int uses16bpc : 1; 
    }  _flags;
    struct __IOSurface { } * _surface;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
