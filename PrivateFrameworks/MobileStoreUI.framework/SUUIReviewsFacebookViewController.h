
@interface SUUIReviewsFacebookViewController : UIViewController {
    SUUIClientContext * _clientContext;
    <SUUIReviewsFacebookViewControllerDelegate> * _delegate;
    SUUIFacebookLikeStatus * _facebookLikeStatus;
    SUUIReviewsFacebookView * _facebookView;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic) <SUUIReviewsFacebookViewControllerDelegate> *delegate;
@property (nonatomic, copy) SUUIFacebookLikeStatus *facebookLikeStatus;

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
