
@protocol DKExtensionAttributes

@required

- (NSString *)bundleIdentifier;
- (NSExtension *)extension;
- (id)initWithExtension:(NSExtension *)arg1;
- (bool)isHeadless;

@end
