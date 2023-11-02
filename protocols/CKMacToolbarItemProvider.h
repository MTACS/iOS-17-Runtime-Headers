
@protocol CKMacToolbarItemProvider <NSObject>

@required

- (void)configureWithToolbarController:(CKMacToolbarController *)arg1;
- (void)providerWillBeRemovedFromToolbarController:(CKMacToolbarController *)arg1;
- (CKMacToolbarItem *)toolbarItemForIdentifier:(NSString *)arg1;

@optional

- (bool)itemProviderDisablesTouches;
- (bool)prefersBottomDividerHidden;
- (bool)reparentToolbarItem:(CKMacToolbarItem *)arg1;
- (void)toolbarDidRemoveItem:(CKMacToolbarItem *)arg1;
- (void)toolbarSizeMetricsDidChange;
- (void)toolbarWillAddItem:(CKMacToolbarItem *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })virtualToolbarContentInsets;
- (double)virtualToolbarPreferredHeight;
- (UIView *)virtualView;

@end
