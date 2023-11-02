
@interface _TtCC22_GroupActivities_UIKit32PictureInPicturePreviewPresenter36PictureInPictureProxyDelegateAdapter : NSObject <PGPictureInPictureProxyDelegate> {
    void delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (long long)pictureInPictureProxyContentType:(id)arg1;
- (id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;

@end
