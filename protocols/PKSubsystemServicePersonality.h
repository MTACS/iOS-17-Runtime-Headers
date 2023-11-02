
@protocol PKSubsystemServicePersonality <NSObject>

@required

- (NSDictionary *)bundleInfoDictionary;
- (NSXPCConnection *)connection;
- (NSString *)identifier;
- (NSDictionary *)plugInDictionary;
- (NSURL *)url;
- (NSUUID *)uuid;
- (NSString *)version;

@end
