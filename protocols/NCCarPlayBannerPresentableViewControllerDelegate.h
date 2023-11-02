
@protocol NCCarPlayBannerPresentableViewControllerDelegate <NSObject>

@required

- (void)didCancelBannerOfPresentableViewController:(NCCarPlayBannerPresentableViewController *)arg1 reason:(NSString *)arg2;
- (void)didSelectBannerOfPresentableViewController:(NCCarPlayBannerPresentableViewController *)arg1;
- (bool)presentableViewControllerClosesByDefault:(NCCarPlayBannerPresentableViewController *)arg1;

@end
