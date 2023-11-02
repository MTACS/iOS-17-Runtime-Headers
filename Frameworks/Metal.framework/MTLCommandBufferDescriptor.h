
@interface MTLCommandBufferDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long errorOptions;
@property (nonatomic) bool retainedReferences;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
