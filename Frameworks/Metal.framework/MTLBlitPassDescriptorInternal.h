
@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor {
    struct MTLBlitPassDescriptorPrivate { 
        MTLBlitPassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; 
    }  _private;
}

+ (id)blitPassDescriptor;

- (const struct MTLBlitPassDescriptorPrivate { id x1; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sampleBufferAttachments;

@end
