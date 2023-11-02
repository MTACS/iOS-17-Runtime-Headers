
@protocol NCClickInteractionPresenterDelegate <NSObject>

@optional

- (void)clickInteractionPresenterDidBeginInteraction:(NCClickInteractionPresenter *)arg1;
- (void)clickInteractionPresenterDidCommitToPresentation:(NCClickInteractionPresenter *)arg1;
- (void)clickInteractionPresenterDidDismiss:(NCClickInteractionPresenter *)arg1;
- (void)clickInteractionPresenterDidPresent:(NCClickInteractionPresenter *)arg1;
- (bool)clickInteractionPresenterShouldBegin:(NCClickInteractionPresenter *)arg1;
- (UIView *)containerViewForClickInteractionPresenter:(NCClickInteractionPresenter *)arg1;

@end
