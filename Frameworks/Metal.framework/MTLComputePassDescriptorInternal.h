
@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {
    struct MTLComputePassDescriptorPrivate { 
        unsigned long long dispatchType; 
        MTLComputePassSampleBufferAttachmentDescriptorArrayInternal *sampleBufferAttachments; 
        unsigned int substreamCount; 
        bool allowCommandEncoderCoalescing; 
    }  _private;
}

@property (nonatomic) bool allowCommandEncoderCoalescing;
@property (nonatomic) unsigned int substreamCount;

+ (id)computePassDescriptor;

- (const struct MTLComputePassDescriptorPrivate { unsigned long long x1; id x2; unsigned int x3; bool x4; }*)_descriptorPrivate;
- (bool)allowCommandEncoderCoalescing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)dispatchType;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sampleBufferAttachments;
- (void)setAllowCommandEncoderCoalescing:(bool)arg1;
- (void)setDispatchType:(unsigned long long)arg1;
- (void)setSubstreamCount:(unsigned int)arg1;
- (unsigned int)substreamCount;

@end
