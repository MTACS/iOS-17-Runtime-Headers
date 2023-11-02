
@interface MTLIntersectionFunctionTableDescriptor : NSObject <NSCopying>

@property (nonatomic) bool forceResourceIndex;
@property (nonatomic) unsigned long long functionCount;
@property (nonatomic) unsigned long long resourceIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)intersectionFunctionTableDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reset;

@end
