
@protocol SKUIPassbookLoaderDelegate <NSObject>

@required

- (UIViewController *)presentationViewControllerForPassbookLoader:(SKUIPassbookLoader *)arg1;

@optional

- (void)passbookLoaderDidFinish:(SKUIPassbookLoader *)arg1;

@end
