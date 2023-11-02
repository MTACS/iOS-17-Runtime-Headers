
@interface ARUISpriteTexture : NSObject <NSCopying> {
    float  _height;
    <MTLTexture> * _texture;
    float  _width;
}

@property (nonatomic, readonly) float height;
@property (nonatomic, readonly) <MTLTexture> *texture;
@property (nonatomic, readonly) float width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (float)height;
- (id)initWithImage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)texture;
- (float)width;

@end
