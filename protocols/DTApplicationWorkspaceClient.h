
@protocol DTApplicationWorkspaceClient <NSObject>

@required

- (void)applicationInstalled:(NSDictionary *)arg1;
- (void)applicationUninstalled:(NSDictionary *)arg1;

@end
