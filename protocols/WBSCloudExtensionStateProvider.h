
@protocol WBSCloudExtensionStateProvider <NSObject>

@required

- (NSDictionary *)cloudExtensionStateForStateManager:(WBSCloudExtensionStateManager *)arg1;
- (bool)hasExtensionWithComposedIdentifier:(NSString *)arg1;
- (NSString *)profileServerIDForStateManager:(WBSCloudExtensionStateManager *)arg1;
- (void)setExtensionWithComposedIdentifier:(NSString *)arg1 isEnabledInCloud:(bool)arg2;

@end
