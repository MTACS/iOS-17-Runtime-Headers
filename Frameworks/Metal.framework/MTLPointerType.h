
@interface MTLPointerType : MTLType

@property (readonly) unsigned long long access;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long dataSize;
@property (readonly) bool elementIsArgumentBuffer;
@property (readonly) unsigned long long elementType;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)elementArrayType;
- (id)elementStructType;

@end
