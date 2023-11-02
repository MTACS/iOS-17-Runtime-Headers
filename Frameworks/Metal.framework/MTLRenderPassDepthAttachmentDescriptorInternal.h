
@interface MTLRenderPassDepthAttachmentDescriptorInternal : MTLRenderPassDepthAttachmentDescriptor {
    struct MTLRenderPassAttachmentDescriptorPrivate { 
        <MTLTextureImplementation> *texture; 
        unsigned long long level; 
        unsigned long long slice; 
        unsigned long long depthPlane; 
        unsigned long long loadAction; 
        unsigned long long storeAction; 
        unsigned long long storeActionOptions; 
        struct { 
            double red; 
            double green; 
            double blue; 
            double alpha; 
        } clearColor; 
        double clearDepth; 
        unsigned int clearStencil; 
        unsigned long long stencilResolveFilter; 
        <MTLTextureImplementation> *resolveTexture; 
        unsigned long long resolveLevel; 
        unsigned long long resolveSlice; 
        unsigned long long resolveDepthPlane; 
        unsigned long long resolveFilter; 
        unsigned long long width; 
        unsigned long long height; 
        bool yInvert; 
    }  _private;
}

+ (id)attachmentDescriptor;

- (const struct MTLRenderPassAttachmentDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; double x9; unsigned int x10; unsigned long long x11; id x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; bool x19; }*)_descriptorPrivate;
- (double)clearDepth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthPlane;
- (unsigned long long)depthResolveFilter;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)level;
- (unsigned long long)loadAction;
- (unsigned long long)resolveDepthPlane;
- (unsigned long long)resolveLevel;
- (unsigned long long)resolveSlice;
- (id)resolveTexture;
- (void)setClearDepth:(double)arg1;
- (void)setDepthPlane:(unsigned long long)arg1;
- (void)setDepthResolveFilter:(unsigned long long)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setLoadAction:(unsigned long long)arg1;
- (void)setResolveDepthPlane:(unsigned long long)arg1;
- (void)setResolveLevel:(unsigned long long)arg1;
- (void)setResolveSlice:(unsigned long long)arg1;
- (void)setResolveTexture:(id)arg1;
- (void)setSlice:(unsigned long long)arg1;
- (void)setStoreAction:(unsigned long long)arg1;
- (void)setStoreActionOptions:(unsigned long long)arg1;
- (void)setTexture:(id)arg1;
- (void)setYInvert:(bool)arg1;
- (unsigned long long)slice;
- (unsigned long long)storeAction;
- (unsigned long long)storeActionOptions;
- (id)texture;
- (bool)yInvert;

@end
