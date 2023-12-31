
@interface MTLArrayType : MTLType

@property (readonly) unsigned long long argumentIndexStride;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long stride;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)elementArrayType;
- (id)elementIndirectArgumentType;
- (id)elementPointerType;
- (id)elementStructType;
- (id)elementTextureReferenceType;

@end
