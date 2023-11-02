
@interface MTLTextureDescriptor : NSObject <NSCopying>

@property (nonatomic) bool allowGPUOptimizedContents;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) long long compressionType;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) bool forceResourceIndex;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long mipmapLevelCount;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } swizzle;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) unsigned long long width;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)texture2DDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 mipmapped:(bool)arg4;
+ (id)textureBufferDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 resourceOptions:(unsigned long long)arg3 usage:(unsigned long long)arg4;
+ (id)textureCubeDescriptorWithPixelFormat:(unsigned long long)arg1 size:(unsigned long long)arg2 mipmapped:(bool)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
