
@protocol MRUNowPlayingViewControllerDelegate <NSObject>

@optional

- (void)nowPlayingViewController:(MRUNowPlayingViewController *)arg1 applyLayout:(long long)arg2;
- (void)nowPlayingViewController:(void *)arg1 didChangeSizeWithAnimations:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: MRUNowPlayingViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)nowPlayingViewController:(MRUNowPlayingViewController *)arg1 showViewController:(UIViewController *)arg2;
- (bool)nowPlayingViewControllerDidSelectArtworkView:(MRUNowPlayingViewController *)arg1;

@end
