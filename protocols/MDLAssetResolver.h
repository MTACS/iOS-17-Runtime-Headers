
@protocol MDLAssetResolver <NSObject>

@required

- (bool)canResolveAssetNamed:(NSString *)arg1;
- (NSURL *)resolveAssetNamed:(NSString *)arg1;

@end
