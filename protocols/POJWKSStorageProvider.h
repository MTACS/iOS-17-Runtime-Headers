
@protocol POJWKSStorageProvider <NSObject>

@required

- (NSData *)jwksCache;
- (void)setJwksCache:(NSData *)arg1;

@end
