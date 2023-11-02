
@interface VMUIOSurfaceDebugDescription : NSObject {
    unsigned long long  _allocationSize;
    unsigned long long  _dirtySize;
    unsigned int  _height;
    NSString * _name;
    unsigned int  _pixelFormat;
    NSString * _pixelFormatString;
    unsigned long long  _residentSize;
    unsigned int  _surfaceID;
    unsigned long long  _virtualAddress;
    unsigned int  _width;
}

@property (readonly) unsigned long long allocationSize;
@property (readonly) unsigned long long dirtySize;
@property (readonly) unsigned int height;
@property (readonly) NSString *name;
@property (readonly) unsigned int pixelFormat;
@property (readonly) NSString *pixelFormatString;
@property (readonly) unsigned long long residentSize;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned long long virtualAddress;
@property (readonly) unsigned int width;

- (void).cxx_destruct;
- (unsigned long long)allocationSize;
- (unsigned long long)dirtySize;
- (unsigned int)height;
- (id)initWithVirtualAddress:(unsigned long long)arg1 allocationSize:(unsigned long long)arg2 surfaceID:(unsigned int)arg3 pixelFormat:(unsigned int)arg4 pixelFormatString:(id)arg5 width:(unsigned int)arg6 height:(unsigned int)arg7 dirtySize:(unsigned long long)arg8 residentSize:(unsigned long long)arg9 name:(id)arg10;
- (id)name;
- (unsigned int)pixelFormat;
- (id)pixelFormatString;
- (unsigned long long)residentSize;
- (unsigned int)surfaceID;
- (unsigned long long)virtualAddress;
- (unsigned int)width;

@end
