
@protocol UCAppClipCodeURLEncoding <NSObject>

@required

- (void)clearCaches;
- (long long)codingVersion;
- (NSData *)encodeURL:(NSURL *)arg1 error:(id*)arg2;

@end
