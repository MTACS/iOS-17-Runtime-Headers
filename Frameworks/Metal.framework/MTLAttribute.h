
@interface MTLAttribute : NSObject

@property (getter=isActive, readonly) bool active;
@property (readonly) unsigned long long attributeIndex;
@property (readonly) unsigned long long attributeType;
@property (readonly) NSString *name;
@property (getter=isPatchControlPointData, readonly) bool patchControlPointData;
@property (getter=isPatchData, readonly) bool patchData;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

@end
