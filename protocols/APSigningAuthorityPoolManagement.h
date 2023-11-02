
@protocol APSigningAuthorityPoolManagement <NSObject>

@required

- (id)initWithPoolSize:(int)arg1;
- (bool)rotateWithError:(id*)arg1;
- (NSData *)signatureForData:(NSData *)arg1 error:(id*)arg2;
- (NSData *)signatureForRawData:(NSData *)arg1 error:(id*)arg2;
- (long long)state;

@end
