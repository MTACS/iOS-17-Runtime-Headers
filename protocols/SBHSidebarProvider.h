
@protocol SBHSidebarProvider <SBHLegibility>

@required

- (<SBHSidebarProviderDelegate> *)delegate;
- (unsigned long long)layoutInsetsIgnoredEdges;
- (void)setDelegate:(id <SBHSidebarProviderDelegate>)arg1;
- (void)setEditingIcons:(bool)arg1;
- (void)setLayoutInsetsIgnoredEdges:(unsigned long long)arg1;
- (void)setSidebarVisualConfiguration:(SBHSidebarVisualConfiguration *)arg1;
- (SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;

@optional

- (UIViewController *)avocadoViewController;
- (void)setAvocadoViewController:(UIViewController *)arg1;

@end
