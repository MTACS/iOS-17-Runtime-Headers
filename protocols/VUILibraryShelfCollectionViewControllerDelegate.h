
@protocol VUILibraryShelfCollectionViewControllerDelegate <NSObject>

@required

- (void)shelfCollectionViewController:(VUILibraryShelfCollectionViewController *)arg1 collectionView:(UICollectionView *)arg2 didSelectMediaEntity:(VUIMediaEntity *)arg3 atIndexPath:(NSIndexPath *)arg4;

@optional

- (void)seeAllButtonPressed:(VUILibraryShelfCollectionViewController *)arg1;

@end
