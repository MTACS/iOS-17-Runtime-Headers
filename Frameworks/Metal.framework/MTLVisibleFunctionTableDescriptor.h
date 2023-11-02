
@interface MTLVisibleFunctionTableDescriptor : NSObject <NSCopying>

@property (nonatomic) bool forceResourceIndex;
@property (nonatomic) unsigned long long functionCount;
@property (nonatomic) unsigned long long resourceIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)visibleFunctionTableDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)reset;

@end
