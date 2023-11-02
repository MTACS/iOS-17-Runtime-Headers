
@interface SeymourUI.PictureInPicturePresenter : NSObject <AVPlayerViewControllerDelegate> {
    void audioSessionCoordinator;
    void dependencies;
    void display;
    void eventHub;
    void sessionClient;
    void state;
    void subscriptionToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;

@end
