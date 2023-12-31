
@protocol MediaControlsCollectionViewDelegate <NSObject>

@required

- (bool)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didEndDisplayingViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;

@end
