
@interface ARUISpriteSheet : NSObject <NSCopying> {
    NSArray * _sprites;
    ARUISpriteTexture * _texture;
}

@property (nonatomic, readonly) NSArray *sprites;
@property (nonatomic, readonly) ARUISpriteTexture *texture;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSpriteSheet:(id)arg1;
- (id)initWithTexture:(id)arg1 sprites:(id)arg2;
- (id)sprites;
- (id)texture;

@end
