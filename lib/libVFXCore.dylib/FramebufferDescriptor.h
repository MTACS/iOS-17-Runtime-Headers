
@interface FramebufferDescriptor : NSObject <NSCopying> {
    unsigned long long  _colorPixelFormat;
    unsigned long long  _depthPixelFormat;
    unsigned long long  _sampleCount;
    unsigned long long  _stencilPixelFormat;
}

@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long stencilPixelFormat;

- (unsigned long long)colorPixelFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)depthPixelFormat;
- (unsigned long long)hash;
- (id)initWithRenderPassDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sampleCount;
- (void)setColorPixelFormat:(unsigned long long)arg1;
- (void)setDepthPixelFormat:(unsigned long long)arg1;
- (void)setSampleCount:(unsigned long long)arg1;
- (void)setStencilPixelFormat:(unsigned long long)arg1;
- (unsigned long long)stencilPixelFormat;

@end
