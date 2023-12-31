
@protocol __TVShelfViewControllerDelegate <NSObject>

@optional

- (void)shelfViewController:(_TVShelfViewController *)arg1 didPlayItemAtIndexPath:(NSIndexPath *)arg2;
- (void)shelfViewController:(_TVShelfViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)shelfViewController:(_TVShelfViewController *)arg1 didSettleOnItemAtIndexPath:(NSIndexPath *)arg2;
- (void)shelfViewController:(_TVShelfViewController *)arg1 didSnapToItemAtIndexPath:(NSIndexPath *)arg2;
- (void)shelfViewController:(_TVShelfViewController *)arg1 updateRelatedView:(UIView *)arg2;

@end
