
@interface MTLFunctionReflection : NSObject

@property (readonly) NSArray *arguments;
@property (readonly) NSArray *bindings;
@property (readonly) unsigned long long primitiveKind;
@property (readonly) NSArray *tags;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

@end
