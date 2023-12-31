
@protocol PKNavigationItemController <NSObject>

@required

- (void)_destroyNavigationBarButtonItemsAnimated:(bool)arg1;
- (void)_setLeftBarButtonItems:(NSArray *)arg1 animated:(bool)arg2;
- (void)_setNavigationBarEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setRightBarButtonItems:(NSArray *)arg1 animated:(bool)arg2;
- (void)_setRightBarButtonItemsEnabled:(bool)arg1;

@end
