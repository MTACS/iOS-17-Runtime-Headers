
@interface PKAccountPromotionsPresenter : NSObject {
    <PKRewardsHubSectionControllerDelegate> * _delegate;
    PKRemoteImagePreparer * _remoteImagePreparer;
}

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 withPromotion:(id)arg2;
- (void)dispatchActionForLink:(id)arg1 linkedApplication:(id)arg2 promotion:(id)arg3;
- (id)initWithRemoteImagePreparer:(id)arg1 delegate:(id)arg2;

@end
