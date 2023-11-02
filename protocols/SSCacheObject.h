
@protocol SSCacheObject <NSObject>

@required

- (NSData *)cacheObjectDataRepresentation;
- (NSString *)cacheObjectTypeIdentifier;

@end
