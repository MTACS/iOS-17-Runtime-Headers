
@protocol SFRequestAppClipInstallCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setUrl:(NSURL *)arg1;
- (NSURL *)url;

@end
