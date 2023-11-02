
@interface PXEducationalTipViewController : UIViewController {
    UIButton * _dismissButton;
    NSString * _dismissButtonTitle;
    id /* block */  _dismissHandler;
    UIImage * _image;
    UIImageView * _imageView;
    NSString * _message;
    UILabel * _messageLabel;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, copy) NSString *dismissButtonTitle;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSString *message;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_handleDismissButton:(id)arg1;
- (void)_invalidateContent;
- (id)dismissButtonTitle;
- (id /* block */)dismissHandler;
- (id)image;
- (id)message;
- (void)setDismissButtonTitle:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewDidLoad;

@end
