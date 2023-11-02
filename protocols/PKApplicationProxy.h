
@protocol PKApplicationProxy <PKBundleProxy>

@required

- (bool)isPlaceholder;
- (NSArray *)plugInKitPlugins;

@end
