
@protocol SFScreenTimeOverlayHostingViewController <NSObject>

@required

- (void)displayHostedScreenTimeView;
- (SFScreenTimeOverlayViewController *)screenTimeOverlayViewController;
- (void)setScreenTimeOverlayViewController:(SFScreenTimeOverlayViewController *)arg1;

@end
