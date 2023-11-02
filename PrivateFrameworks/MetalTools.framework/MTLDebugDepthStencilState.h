
@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState {
    unsigned char  _attachmentWriteMask;
    MTLDepthStencilDescriptor * _descriptor;
}

@property (nonatomic, readonly) unsigned char attachmentWriteMask;
@property (nonatomic, readonly) MTLDepthStencilDescriptor *descriptor;

- (unsigned char)attachmentWriteMask;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDepthStencilState:(id)arg1 descriptor:(id)arg2 device:(id)arg3;

@end
