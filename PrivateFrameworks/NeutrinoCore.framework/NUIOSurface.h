
@interface NUIOSurface : NSObject {
    struct __IOSurface { } * _IOSurfaceRef;
    NUPixelFormat * _format;
    struct __CVBuffer { } * _pixelBuffer;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    NSMutableDictionary * _textures;
}

@property (nonatomic, readonly) IOSurface *IOSurface;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurfaceRef;
@property (nonatomic, retain) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (nonatomic, readonly) long long sizeInBytes;

- (void).cxx_destruct;
- (id)IOSurface;
- (struct __IOSurface { }*)IOSurfaceRef;
- (void)_allocateSurface;
- (int)_fetchPurgeState:(unsigned int*)arg1;
- (id)_newTextureForDevice:(id)arg1;
- (unsigned int)_purgeLevelToOSValue:(long long)arg1;
- (id)_purgeStateDescription;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (id)format;
- (id)init;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (void)invalidatePixelBuffer;
- (bool)isPurged;
- (bool)makeNonPurgeable;
- (void)makePurgeable:(long long)arg1;
- (id)name;
- (id)newRenderDestination;
- (struct __CVBuffer { }*)pixelBuffer;
- (bool)read:(id /* block */)arg1;
- (long long)rowBytes;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setName:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (long long)sizeInBytes;
- (id)textureForDevice:(id)arg1;
- (bool)write:(id /* block */)arg1;

@end
