
@protocol SSCacheObjectFactory <NSObject>

@required

- (<SSCacheObject> *)cachedObjectWithDataRepresentation:(NSData *)arg1 typeIdentifier:(NSString *)arg2;
- (bool)supportsTypeIdentifier:(NSString *)arg1;

@end
