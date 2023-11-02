
@interface CSContentActionInterpreter : NSObject {
    UIViewController * _digestOnboardingSuggestionViewController;
    UIViewController * _nowPlayingViewController;
}

@property (nonatomic) UIViewController *digestOnboardingSuggestionViewController;
@property (nonatomic) UIViewController *nowPlayingViewController;

- (void).cxx_destruct;
- (void)_viewControllerFromAction:(id)arg1 completion:(id /* block */)arg2;
- (id)digestOnboardingSuggestionViewController;
- (id)nowPlayingViewController;
- (void)setDigestOnboardingSuggestionViewController:(id)arg1;
- (void)setNowPlayingViewController:(id)arg1;

@end
