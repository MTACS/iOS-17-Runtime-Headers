
@protocol EXExtensionInfoProviding <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSString *)containerBundleIdentifier;
- (NSString *)containingViewControllerClassName;

@end
