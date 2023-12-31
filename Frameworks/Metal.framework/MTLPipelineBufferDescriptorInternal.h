
@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor {
    struct MTLPipelineBufferDescriptorPrivate { 
        union { 
            struct { 
                unsigned int mutability : 2; 
            } ; 
            struct { 
                unsigned long long bits; 
            } ; 
        } ; 
    }  _private;
}

- (const struct MTLPipelineBufferDescriptorPrivate { union { struct { unsigned int x_1_2_1 : 2; } x_1_1_1; struct { unsigned long long x_2_2_1; } x_1_1_2; } x1; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mutability;
- (void)setMutability:(unsigned long long)arg1;

@end
