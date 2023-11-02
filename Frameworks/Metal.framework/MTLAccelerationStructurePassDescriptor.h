
@interface MTLAccelerationStructurePassDescriptor : NSObject <NSCopying> {
    MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray * _sampleBufferAttachments;
}

@property (readonly) MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)accelerationStructurePassDescriptor;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)convertToComputePassDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sampleBufferAttachments;

@end
