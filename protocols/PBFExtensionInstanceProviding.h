
@protocol PBFExtensionInstanceProviding <NSObject>

@required

- (<PRPosterExtensionDescribing> *)acquireExtensionInstance:(NSString *)arg1 reason:(NSString *)arg2 error:(out id*)arg3;
- (void)relinquishExtensionInstance:(NSString *)arg1 reason:(NSString *)arg2;

@end
