
@interface MTLFunctionConstant : NSObject

@property (readonly) unsigned long long index;
@property (readonly) NSString *name;
@property (readonly) bool required;
@property (readonly) unsigned long long type;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

@end
