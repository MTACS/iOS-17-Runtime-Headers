
@interface LoadingViewController : UIViewController {
    UIImage * _image;
    bool  _imageIsFullScreen;
    UIImageView * _imageView;
    long long  _orientation;
    long long  _preferredStatusBarStyle;
    UIView * _statusBarView;
}

- (void).cxx_destruct;
- (id)initWithWebClip:(id)arg1 orientation:(long long)arg2;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;

@end
