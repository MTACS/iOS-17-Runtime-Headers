
@interface SKUIReviewsFacebookViewController : UIViewController {
    SKUIClientContext * _clientContext;
    <SKUIReviewsFacebookViewControllerDelegate> * _delegate;
    SKUIFacebookLikeStatus * _facebookLikeStatus;
    SKUIReviewsFacebookView * _facebookView;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) <SKUIReviewsFacebookViewControllerDelegate> *delegate;
@property (nonatomic, copy) SKUIFacebookLikeStatus *facebookLikeStatus;

- (void).cxx_destruct;
- (void)_changeStatusToUserLiked:(bool)arg1;
- (void)_reloadFacebookView;
- (void)_toggleLike:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)facebookLikeStatus;
- (void)loadView;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFacebookLikeStatus:(id)arg1;

@end
