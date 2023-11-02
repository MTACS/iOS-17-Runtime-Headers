
@protocol VUIMenuCollectionViewControllerDelegate <NSObject>

@required

- (void)didSelectMenuItemAtIndexPath:(NSIndexPath *)arg1;

@optional

- (void)categoryMenuViewControllerShouldDismiss:(VUIMenuCollectionViewController *)arg1;
- (void)didUpdateFocusToIndexPath:(NSIndexPath *)arg1;
- (void)menuCollectionViewControllerDidFinishLoading;

@end
