
@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray {
    MTLRenderPassColorAttachmentDescriptorInternal * _color_descriptors;
    MTLRenderPassDepthAttachmentDescriptorInternal * _depth_descriptor;
    MTLRenderPassStencilAttachmentDescriptorInternal * _stencil_descriptor;
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
