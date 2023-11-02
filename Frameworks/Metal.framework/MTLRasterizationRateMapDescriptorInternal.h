
@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {
    NSString * _label;
    MTLRasterizationRateLayerArrayInternal * _layerAccessor;
    /* Warning: unhandled struct encoding: '{vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<MTLRasterizationRateLayerDescriptor **, std::allocator<MTLRasterizationRateLayerDescriptor *>>="__value_"^@}}' */ struct vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>> { 
        __end_ **__begin_; 
    }  _layers;
    float  _minFactor;
    unsigned long long  _mutability;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _screenSize;
    bool  _skipSampleValidationAndApplySampleAtTileGranularity;
    bool  _skipSampleValidationAndInterpolation;
}

@property (nonatomic) float minFactor;
@property (nonatomic) unsigned long long mutability;
@property (nonatomic) bool skipSampleValidationAndApplySampleAtTileGranularity;
@property (nonatomic) bool skipSampleValidationAndInterpolation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithScreenSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)layerAtIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (const id*)layerPointer:(unsigned long long*)arg1;
- (id)layers;
- (float)minFactor;
- (unsigned long long)mutability;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })screenSize;
- (void)setLabel:(id)arg1;
- (void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMinFactor:(float)arg1;
- (void)setMutability:(unsigned long long)arg1;
- (void)setScreenSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setSkipSampleValidationAndApplySampleAtTileGranularity:(bool)arg1;
- (void)setSkipSampleValidationAndInterpolation:(bool)arg1;
- (bool)skipSampleValidationAndApplySampleAtTileGranularity;
- (bool)skipSampleValidationAndInterpolation;

@end
