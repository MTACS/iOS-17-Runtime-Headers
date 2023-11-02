
@interface FigMetalTextureStub : NSObject <MTLTexture> {
    unsigned long long  _arrayLength;
    unsigned long long  _depth;
    unsigned long long  _height;
    NSString * _label;
    unsigned long long  _mipmapLevelCount;
    unsigned long long  _offset;
    unsigned long long  _pixelFormat;
    unsigned long long  _sampleCount;
    unsigned long long  _textureType;
    unsigned long long  _usage;
    unsigned long long  _width;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) bool allowGPUOptimizedContents;
@property (readonly) unsigned long long arrayLength;
@property (readonly) <MTLBuffer> *buffer;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) long long compressionType;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long firstMipmapInTail;
@property (getter=isFramebufferOnly, readonly) bool framebufferOnly;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (nonatomic) unsigned long long height;
@property (readonly) struct __IOSurface { }*iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) bool isSparse;
@property (copy) NSString *label;
@property (readonly) unsigned long long mipmapLevelCount;
@property (nonatomic) unsigned long long offset;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) <MTLTexture> *parentTexture;
@property (nonatomic) unsigned long long pixelFormat;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) <MTLResource> *rootResource;
@property (readonly) unsigned long long sampleCount;
@property (getter=isShareable, readonly) bool shareable;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } swizzle;
@property (readonly) unsigned long long tailSizeInBytes;
@property (readonly) unsigned long long textureType;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) unsigned long long width;

- (void).cxx_destruct;
- (unsigned long long)arrayLength;
- (unsigned long long)depth;
- (unsigned long long)height;
- (id)initWithDescriptor:(id)arg1;
- (id)label;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)offset;
- (unsigned long long)pixelFormat;
- (unsigned long long)sampleCount;
- (void)setHeight:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setUsage:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)textureType;
- (unsigned long long)usage;
- (unsigned long long)width;

@end
