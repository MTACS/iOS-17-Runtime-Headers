
@protocol MCMResultWithURL <MCMResult>

@required

- (bool)existed;
- (NSString *)path;
- (const char *)sandboxToken;
- (NSURL *)url;

@end
