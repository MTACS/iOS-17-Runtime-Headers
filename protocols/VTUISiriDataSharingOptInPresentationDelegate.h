
@protocol VTUISiriDataSharingOptInPresentationDelegate

@required

- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(VTUISiriDataSharingOptInPresenter *)arg1;

@optional

- (void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(VTUISiriDataSharingOptInPresenter *)arg1;
- (void)siriDataSharingOptInViewDismissButtonTappedFromPresenter:(VTUISiriDataSharingOptInPresenter *)arg1;

@end
