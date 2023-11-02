
@protocol CNContactPhotoViewDelegate <NSObject>

@required

- (CNContactViewCache *)contactViewCache;
- (void)photoView:(CNContactPhotoView *)arg1 didAcceptDropOfImageData:(NSData *)arg2;
- (void)photoViewDidUpdate:(CNContactPhotoView *)arg1;
- (UIViewController *)viewControllerForPhotoView:(CNContactPhotoView *)arg1;

@optional

- (void)didTapPhotoView;

@end
