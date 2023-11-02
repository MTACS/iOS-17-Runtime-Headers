
@protocol VUIPlaybackContainerViewController <NSObject>

@required

- (<VUIPlaybackContainerViewControllerDelegate> *)delegate;
- (void)embedMultiPlayerViewController:(UIViewController<VUIMultiPlayerViewController> *)arg1;
- (void)enterPictureInPicture;
- (void)exitPictureInPictureWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)hidePictureInPictureWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)loadPostPlayForMediaItem:(NSObject<TVPMediaItem> *)arg1;
- (void)presentPlayerViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: AVPlayerViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removePostPlayViewController;
- (void)setDelegate:(id <VUIPlaybackContainerViewControllerDelegate>)arg1;
- (UIViewController<VUIMultiPlayerViewController> *)unembedMultiPlayerViewController;

@end
