
@protocol NSURLJSExports <JSExport>

@required

- (NSString *)absoluteString;
- (NSURL *)filterQueryParameters:(JSValue *)arg1;
- (NSDictionary *)queryParameters;
- (NSString *)resourceSpecifier;
- (NSString *)scheme;
- (NSURL *)withPathComponent:(NSString *)arg1;
- (NSURL *)withQueryParameter:(NSString *)arg1 :(NSString *)arg2;
- (NSURL *)withQueryParameters:(NSDictionary *)arg1;

@end
