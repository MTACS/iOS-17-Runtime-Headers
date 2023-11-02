
@interface MPAudioAndSubtitlesController : UIViewController {
    UIViewController * _viewControllerForOrientation;
}

@property (nonatomic) UIViewController *viewControllerForOrientation;

- (void).cxx_destruct;
- (id)initWithAVItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setViewControllerForOrientation:(id)arg1;
- (id)viewControllerForOrientation;

@end
