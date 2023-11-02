
@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor {
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate { 
        union { 
            struct { 
                unsigned int pixelFormat; 
            } ; 
            struct { 
                unsigned int bits; 
            } ; 
        } ; 
    }  _private;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;

@end
