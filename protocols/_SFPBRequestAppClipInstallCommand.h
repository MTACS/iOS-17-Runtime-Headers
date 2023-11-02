
@protocol _SFPBRequestAppClipInstallCommand <NSObject>

@required

- (NSString *)applicationBundleIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setUrl:(_SFPBURL *)arg1;
- (_SFPBURL *)url;

@end
