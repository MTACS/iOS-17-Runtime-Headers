
@interface BWVideoFormatRequirements : BWFormatRequirements <NSSecureCoding> {
    unsigned long long  _bytesPerRowAlignment;
    unsigned long long  _height;
    unsigned long long  _heightAlignment;
    bool  _memoryPoolUseAllowed;
    unsigned long long  _planeAlignment;
    NSArray * _preferredPixelFormats;
    bool  _prewireBuffers;
    unsigned long long  _sliceCount;
    NSArray * _supportedCacheModes;
    NSArray * _supportedColorSpaceProperties;
    NSArray * _supportedPixelFormats;
    unsigned long long  _width;
    unsigned long long  _widthAlignment;
}

@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long heightAlignment;
@property (nonatomic) bool memoryPoolUseAllowed;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic, copy) NSArray *preferredPixelFormats;
@property (nonatomic) bool prewireBuffers;
@property (nonatomic) unsigned long long sliceCount;
@property (nonatomic, copy) NSArray *supportedCacheModes;
@property (nonatomic, copy) NSArray *supportedColorSpaceProperties;
@property (nonatomic, copy) NSArray *supportedPixelFormats;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long widthAlignment;

+ (id)cacheModesForCacheProfile:(int)arg1;
+ (id)cacheModesForOptimizedCPUAccess;
+ (id)cacheModesForOptimizedDisplayAccess;
+ (id)cacheModesForOptimizedHWAccess;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (unsigned long long)bytesPerRowAlignment;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (Class)formatClass;
- (unsigned long long)height;
- (unsigned long long)heightAlignment;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;
- (bool)memoryPoolUseAllowed;
- (id)pixelBufferAttributes;
- (unsigned long long)planeAlignment;
- (id)preferredPixelFormats;
- (bool)prewireBuffers;
- (void)setBytesPerRowAlignment:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setHeightAlignment:(unsigned long long)arg1;
- (void)setMemoryPoolUseAllowed:(bool)arg1;
- (void)setPlaneAlignment:(unsigned long long)arg1;
- (void)setPreferredPixelFormats:(id)arg1;
- (void)setPrewireBuffers:(bool)arg1;
- (void)setSliceCount:(unsigned long long)arg1;
- (void)setSupportedCacheModes:(id)arg1;
- (void)setSupportedColorSpaceProperties:(id)arg1;
- (void)setSupportedPixelFormats:(id)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setWidthAlignment:(unsigned long long)arg1;
- (unsigned long long)sliceCount;
- (id)supportedCacheModes;
- (id)supportedColorSpaceProperties;
- (id)supportedPixelFormats;
- (unsigned long long)width;
- (unsigned long long)widthAlignment;

@end
