
@interface SeymourUI.RemoteDisplayPresenter : NSObject <AVPlayerViewControllerDelegate> {
    void dependencies;
    void display;
    void eventHub;
    void platform;
    void sessionClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void storefrontLocalizer;
    void subscriptionToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;

@end
