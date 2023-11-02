
@interface SUImageViewController : SUViewController {
    SUTouchCaptureView * _backstopView;
    UIImageView * _imageView;
}

- (void)_backstopAction:(id)arg1;
- (id)_imageView;
- (void)dealloc;
- (void)loadView;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;

@end
