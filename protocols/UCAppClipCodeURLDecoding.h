
@protocol UCAppClipCodeURLDecoding <NSObject>

@required

- (void)clearCaches;
- (long long)codingVersion;
- (NSURL *)decodeURLWithData:(NSData *)arg1 error:(id*)arg2;

@end
