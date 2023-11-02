
@interface MTLResourceStatePassDescriptorInternal : MTLResourceStatePassDescriptor {
    struct MTLResourceStatePassDescriptorPrivate { 
        MTLResourceStatePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; 
    }  _private;
}

+ (id)resourceStatePassDescriptor;

- (const struct MTLResourceStatePassDescriptorPrivate { id x1; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sampleBufferAttachments;

@end
