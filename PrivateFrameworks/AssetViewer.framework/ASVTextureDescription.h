
@interface ASVTextureDescription : NSObject {
    struct { 
        long long colorModel; 
        long long pixelEncoding; 
    }  _destinationPixelFormat;
    long long  _downsamplingFactor;
    long long  _fileType;
    bool  _generateMipmaps;
    NSString * _name;
    struct { 
        long long colorModel; 
        long long pixelEncoding; 
    }  _originalPixelFormat;
    void _originalSize;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } destinationPixelFormat;
@property (nonatomic, readonly) void destinationSize;
@property (nonatomic) long long downsamplingFactor;
@property (nonatomic, readonly) long long fileType;
@property (nonatomic) bool generateMipmaps;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { long long x1; long long x2; } originalPixelFormat;
@property (nonatomic, readonly) void originalSize;
@property (nonatomic, readonly) bool requiresDownsampling;

+ (unsigned long long)bytesPerComponentForColorModel:(long long)arg1;
+ (unsigned long long)bytesPerComponentForPixelEncoding:(long long)arg1;
+ (unsigned long long)bytesPerPixelForPixelFormat:(struct { long long x1; long long x2; })arg1;
+ (long long)pixelEncodingForBitsPerComponent:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)debugDescription;
- (struct { long long x1; long long x2; })destinationPixelFormat;
- (void)destinationSize;
- (long long)downsamplingFactor;
- (long long)fileType;
- (bool)generateMipmaps;
- (id)initWithName:(id)arg1 destinationPixelFormat:(struct { long long x1; long long x2; })arg2 imageProperties:(struct __CFDictionary { }*)arg3 fileType:(struct __CFString { }*)arg4 generateMipmaps:(bool)arg5;
- (id)initWithName:(void *)arg1 originalSize:(void *)arg2 originalPixelFormat:(void *)arg3 destinationPixelFormat:(void *)arg4 downsamplingFactor:(void *)arg5 fileType:(void *)arg6 generateMipmaps:(void *)arg7; // needs 7 arg types, found 6: id, struct { long long x1; long long x2; }, struct { long long x1; long long x2; }, long long, long long, bool
- (id)name;
- (struct { long long x1; long long x2; })originalPixelFormat;
- (void)originalSize;
- (bool)requiresDownsampling;
- (void)setDownsamplingFactor:(long long)arg1;
- (void)setGenerateMipmaps:(bool)arg1;

@end
