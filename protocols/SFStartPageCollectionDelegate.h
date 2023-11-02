
@protocol SFStartPageCollectionDelegate <NSObject>

@required

- (void)beginCustomizationForStartPageCollectionViewController:(SFStartPageCollectionViewController *)arg1;
- (void)startPageCollectionViewController:(SFStartPageCollectionViewController *)arg1 didSelectItemWithIdentifier:(id)arg2;
- (void)startPageCollectionViewControllerDidChangeBackgroundStyle:(SFStartPageCollectionViewController *)arg1;
- (void)startPageCollectionViewControllerDidCompleteDismissGesture:(SFStartPageCollectionViewController *)arg1;
- (void)startPageCollectionViewControllerDidScroll:(SFStartPageCollectionViewController *)arg1;
- (bool)startPageCollectionViewControllerShouldDeferLoadingContentUntilKeyboardAnimatesIn:(SFStartPageCollectionViewController *)arg1;
- (bool)startPageCollectionViewControllerShouldInstallCustomBackdrops:(SFStartPageCollectionViewController *)arg1;
- (double)startPageCollectionViewControllerTopPadding:(SFStartPageCollectionViewController *)arg1;

@optional

- (void)startPageCollectionViewControllerDidUpdateContent:(SFStartPageCollectionViewController *)arg1;

@end
