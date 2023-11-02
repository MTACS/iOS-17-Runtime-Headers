
@interface HUNCCameraPlayerPlaceholderContentViewController : UIViewController {
    NSURL * _imageURL;
    UIImage * _notificationImage;
    UIImageView * _placeholderImageView;
    bool  _shouldShowPlaceholderContent;
}

@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, retain) UIImage *notificationImage;
@property (nonatomic, retain) UIImageView *placeholderImageView;
@property (nonatomic) bool shouldShowPlaceholderContent;

- (void).cxx_destruct;
- (id)imageURL;
- (id)initWithImageURL:(id)arg1;
- (id)notificationImage;
- (id)placeholderImageView;
- (void)setImageURL:(id)arg1;
- (void)setNotificationImage:(id)arg1;
- (void)setPlaceholderImageView:(id)arg1;
- (void)setShouldShowPlaceholderContent:(bool)arg1;
- (bool)shouldShowPlaceholderContent;
- (void)updatePlaceholderImage:(id)arg1;
- (void)viewDidLoad;

@end
