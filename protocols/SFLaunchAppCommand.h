
@protocol SFLaunchAppCommand <SFCommand>

@required

- (NSString *)applicationBundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;

@end
