
@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { 
        MTLStencilDescriptorInternal *frontFaceStencil; 
        MTLStencilDescriptorInternal *backFaceStencil; 
        unsigned long long depthCompareFunction; 
        bool depthWriteEnabled; 
        NSString *label; 
    }  _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x1; id x2; unsigned long long x3; bool x4; id x5; }*depthStencilPrivate;

- (id)backFaceStencil;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthCompareFunction;
- (const struct MTLDepthStencilDescriptorPrivate { id x1; id x2; unsigned long long x3; bool x4; id x5; }*)depthStencilPrivate;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)frontFaceStencil;
- (unsigned long long)hash;
- (id)init;
- (bool)isDepthWriteEnabled;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)setBackFaceStencil:(id)arg1;
- (void)setDepthCompareFunction:(unsigned long long)arg1;
- (void)setDepthWriteEnabled:(bool)arg1;
- (void)setFrontFaceStencil:(id)arg1;
- (void)setLabel:(id)arg1;

@end
