
@interface MTLStructMember : NSObject

@property (readonly) unsigned long long argumentIndex;
@property (readonly) unsigned long long dataType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)arrayType;
- (id)indirectArgumentType;
- (id)pointerType;
- (unsigned long long)renderTargetIndex;
- (id)structType;
- (id)textureReferenceType;

@end
