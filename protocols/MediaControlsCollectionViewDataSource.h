
@protocol MediaControlsCollectionViewDataSource <NSObject>

@required

- (long long)defaultSelectedItemIndexForCollectionViewController:(MediaControlsCollectionViewController *)arg1;
- (UIViewController<MediaControlsCollectionItemViewController> *)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 viewControllerForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCollectionViewController:(MediaControlsCollectionViewController *)arg1;

@end
