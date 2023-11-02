
@protocol LSIconResourceLocator <NSObject>

@required

- (NSString *)applicationIdentifier;
- (NSDictionary *)bundleIconsDictionary;
- (NSURL *)resourcesDirectoryURL;

@end
