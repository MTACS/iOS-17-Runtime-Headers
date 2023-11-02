
@protocol _UIBarButtonItemAppearanceChangeObserver <NSObject>

@required

- (void)_barButtonItemAppearanceChangedItemData:(UIBarButtonItemAppearance *)arg1 toItemData:(_UIBarButtonItemData *)arg2 fromItemData:(_UIBarButtonItemData *)arg3;
- (void)_barButtonItemDataChanged:(UIBarButtonItemAppearance *)arg1;

@end
