
@interface CSIATECHelper : NSObject {
    struct __CFData { } * data;
    unsigned int  glInternalFormat;
    unsigned int  height;
    unsigned int  metalPixelFormat;
    unsigned int  rowbytes;
    struct __CFBoolean { } * twiddled;
    unsigned int  width;
}

- (void)dealloc;

@end
