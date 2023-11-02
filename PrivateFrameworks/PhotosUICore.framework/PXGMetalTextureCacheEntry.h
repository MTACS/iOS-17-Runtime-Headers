
@interface PXGMetalTextureCacheEntry : NSObject {
    <MTLTexture> * _texture;
    NSDate * _time;
}

@property (nonatomic, readonly) <MTLTexture> *texture;
@property (nonatomic, readonly) NSDate *time;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTexture:(id)arg1;
- (id)texture;
- (id)time;

@end
