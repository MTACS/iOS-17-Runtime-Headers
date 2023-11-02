
@protocol EXExtensionPoint <NSObject>

@required

- (NSDictionary *)SDKDictionary;
- (NSString *)identifier;
- (unsigned int)platform;
- (NSURL *)url;
- (unsigned long long)variant;

@end
