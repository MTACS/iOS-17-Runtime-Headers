
@protocol APSigningAuthorizable <NSObject>

@required

- (unsigned long long)contextIdx;
- (long long)failureError;
- (bool)isStashed;
- (NSData *)signatureForData:(NSData *)arg1 error:(id*)arg2;
- (NSData *)signatureForRawData:(NSData *)arg1 error:(id*)arg2;
- (long long)state;

@end
