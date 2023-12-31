
@interface MTLTextureReferenceType : MTLType

@property (readonly) unsigned long long access;
@property (readonly) bool isDepthTexture;
@property (readonly) unsigned long long textureDataType;
@property (readonly) unsigned long long textureType;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

@end
