
@interface TSDMetalRenderTarget : NSObject {
    MTLRenderPassDescriptor * _passDescriptor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSArray * _textures;
}

@property (readonly) MTLRenderPassDescriptor *passDescriptor;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) <MTLTexture> *texture;
@property (readonly) NSArray *textures;

- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 metalContext:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 metalContext:(id)arg2 numberOfAttachments:(unsigned long long)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })orthoProjectionWithVerticalFlip:(bool)arg1;
- (id)passDescriptor;
- (void)setClearColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setClearColor:(struct { double x1; double x2; double x3; double x4; })arg1 atAttachmentIndex:(unsigned long long)arg2;
- (void)setTextureLoadAction:(unsigned long long)arg1;
- (void)setTextureLoadAction:(unsigned long long)arg1 atAttachmentIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })size;
- (id)texture;
- (id)textureAtAttachmentIndex:(unsigned long long)arg1;
- (id)textures;

@end
