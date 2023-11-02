
@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController {
    UIImageView * _contentImageView;
}

@property (nonatomic, retain) UIImage *contentImage;
@property (nonatomic, readonly) UIImageView *contentImageView;

- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (void)_updateContentMode;
- (void)_viewDidUpdateContent;
- (id)contentImage;
- (id)contentImageView;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (void)setContentImage:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
