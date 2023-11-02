
@protocol MPSSVGFTextureAllocator <NSObject>

@required

- (void)returnTexture:(id <MTLTexture>)arg1;
- (<MTLTexture> *)textureWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;

@end
