
@protocol ISResourceMetadata <NSObject>

@required

- (NSNumber *)dimension;
- (NSString *)name;
- (NSNumber *)scale;
- (bool)selectedVariant;

@end
