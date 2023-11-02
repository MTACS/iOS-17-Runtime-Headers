
@interface LASecAccessControl : NSObject

+ (struct __SecAccessControl { }*)allowAllACL;
+ (id)constraintsFromACL:(struct __SecAccessControl { }*)arg1;
+ (struct __SecAccessControl { }*)denyAllACL;
+ (struct __SecAccessControl { }*)deserializeACL:(id)arg1;
+ (id)serializeACL:(struct __SecAccessControl { }*)arg1;

@end
