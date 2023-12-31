
@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {
    struct MTLSamplerDescriptorPrivate { 
        union { 
            struct { 
                unsigned int minFilter : 2; 
                unsigned int magFilter : 2; 
                unsigned int mipFilter : 2; 
                unsigned int sAddressMode : 3; 
                unsigned int tAddressMode : 3; 
                unsigned int rAddressMode : 3; 
                unsigned int normalizedCoords : 1; 
                unsigned int borderColor : 2; 
                unsigned int lodAverage : 1; 
                unsigned int compareFunction : 3; 
                unsigned int supportArgumentBuffers : 1; 
                unsigned int forceResourceIndex : 1; 
                unsigned int forceSeamsOnCubemapFiltering : 1; 
            } ; 
            unsigned int miscHash; 
        } ; 
        union { 
            unsigned int lodMinClampHash; 
            float lodMinClamp; 
        } ; 
        union { 
            unsigned int lodMaxClampHash; 
            float lodMaxClamp; 
        } ; 
        union { 
            unsigned int lodBiasHash; 
            float lodBias; 
        } ; 
        unsigned long long maxAnisotropy; 
        NSString *label; 
        unsigned long long resourceIndex; 
        unsigned int customBorderColorValue[4]; 
        unsigned long long pixelFormat; 
    }  _private;
}

@property (nonatomic) unsigned long long borderColorSPI;
@property (nonatomic) unsigned int customBorderColorValue_0;
@property (nonatomic) unsigned int customBorderColorValue_1;
@property (nonatomic) unsigned int customBorderColorValue_2;
@property (nonatomic) unsigned int customBorderColorValue_3;
@property (nonatomic) bool forceSeamsOnCubemapFiltering;

- (unsigned long long)borderColor;
- (unsigned long long)borderColorSPI;
- (unsigned long long)compareFunction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)customBorderColorValue_0;
- (unsigned int)customBorderColorValue_1;
- (unsigned int)customBorderColorValue_2;
- (unsigned int)customBorderColorValue_3;
- (void)dealloc;
- (id)description;
- (const struct MTLSamplerDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 2; unsigned int x_1_2_4 : 3; unsigned int x_1_2_5 : 3; unsigned int x_1_2_6 : 3; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 2; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 3; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; } x_1_1_1; unsigned int x_1_1_2; } x1; union { unsigned int x_2_1_1; float x_2_1_2; } x2; union { unsigned int x_3_1_1; float x_3_1_2; } x3; union { unsigned int x_4_1_1; float x_4_1_2; } x4; unsigned long long x5; id x6; unsigned long long x7; unsigned int x8[4]; unsigned long long x9; }*)descriptorPrivate;
- (bool)forceResourceIndex;
- (bool)forceSeamsOnCubemapFiltering;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)lodAverage;
- (float)lodBias;
- (float)lodMaxClamp;
- (float)lodMinClamp;
- (unsigned long long)magFilter;
- (unsigned long long)maxAnisotropy;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (bool)normalizedCoordinates;
- (unsigned long long)pixelFormat;
- (unsigned long long)rAddressMode;
- (unsigned long long)resourceIndex;
- (unsigned long long)sAddressMode;
- (void)setBorderColor:(unsigned long long)arg1;
- (void)setBorderColorSPI:(unsigned long long)arg1;
- (void)setCompareFunction:(unsigned long long)arg1;
- (void)setCustomBorderColorValue_0:(unsigned int)arg1;
- (void)setCustomBorderColorValue_1:(unsigned int)arg1;
- (void)setCustomBorderColorValue_2:(unsigned int)arg1;
- (void)setCustomBorderColorValue_3:(unsigned int)arg1;
- (void)setForceResourceIndex:(bool)arg1;
- (void)setForceSeamsOnCubemapFiltering:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLodAverage:(bool)arg1;
- (void)setLodBias:(float)arg1;
- (void)setLodMaxClamp:(float)arg1;
- (void)setLodMinClamp:(float)arg1;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setNormalizedCoordinates:(bool)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setRAddressMode:(unsigned long long)arg1;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setSAddressMode:(unsigned long long)arg1;
- (void)setSupportArgumentBuffers:(bool)arg1;
- (void)setTAddressMode:(unsigned long long)arg1;
- (bool)supportArgumentBuffers;
- (unsigned long long)tAddressMode;

@end
