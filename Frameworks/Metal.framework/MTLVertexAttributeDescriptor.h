
@interface MTLVertexAttributeDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long bufferIndex;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long offset;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
