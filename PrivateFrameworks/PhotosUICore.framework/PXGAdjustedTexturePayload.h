
@interface PXGAdjustedTexturePayload : NSObject <NSCopying> {
    <PXGDisplayAssetAdjustment> * _adjustment;
    bool  _mipmaps;
    PXGImageTexture * _texture;
}

@property (nonatomic, readonly) <PXGDisplayAssetAdjustment> *adjustment;
@property (nonatomic, readonly) bool mipmaps;
@property (nonatomic, readonly) PXGImageTexture *texture;

- (void).cxx_destruct;
- (id)adjustment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTexture:(id)arg1 adjustment:(id)arg2 mipmaps:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)mipmaps;
- (id)texture;

@end
