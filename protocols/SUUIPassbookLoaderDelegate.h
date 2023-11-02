
@protocol SUUIPassbookLoaderDelegate <NSObject>

@required

- (UIViewController *)presentationViewControllerForPassbookLoader:(SUUIPassbookLoader *)arg1;

@optional

- (void)passbookLoaderDidFinish:(SUUIPassbookLoader *)arg1;

@end
