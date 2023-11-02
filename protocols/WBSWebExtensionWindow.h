
@protocol WBSWebExtensionWindow <NSObject>

@required

- (<WBSWebExtensionTab> *)activeWebExtensionTab;
- (double)idForWebExtensions;
- (bool)isFocused;
- (bool)isPopupWindow;
- (bool)isPrivate;
- (WBProfile *)profile;
- (void)validateToolbarItemForExtension:(WBSWebExtensionData *)arg1;
- (NSArray *)webExtensionTabs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })webExtensionWindowGeometry;
- (NSString *)webExtensionWindowState;
- (NSString *)webExtensionWindowType;

@end
