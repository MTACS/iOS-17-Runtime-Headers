
@interface CSNowPlayingController : NSObject {
    CSMediaControlsViewController * _controlsViewController;
}

@property (nonatomic, readonly) CSMediaControlsViewController *controlsViewController;

- (void).cxx_destruct;
- (id)controlsViewController;
- (id)init;

@end
