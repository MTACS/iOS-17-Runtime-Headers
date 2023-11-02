
@interface VFXExternalDrawCall : NSObject {
    void aabb;
    void drawCallEncoder;
    void isDepthOnly;
    void opaque;
}

@property (nonatomic, readonly) id /* block */ encoder;
@property (nonatomic, readonly) bool hasCustomHandler;

- (void).cxx_destruct;
- (void)boundingBoxMax;
- (void)boundingBoxMin;
- (bool)depthOnly;
- (id /* block */)encoder;
- (bool)hasCustomHandler;
- (id)init;
- (bool)isOpaque;

@end
