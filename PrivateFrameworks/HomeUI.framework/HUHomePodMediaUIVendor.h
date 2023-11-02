
@interface HUHomePodMediaUIVendor : NSObject {
    MRUNowPlayingViewController * _nowPlayingViewController;
}

@property (nonatomic, retain) MRUNowPlayingViewController *nowPlayingViewController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)nowPlayingViewController;
- (void)setNowPlayingViewController:(id)arg1;

@end
