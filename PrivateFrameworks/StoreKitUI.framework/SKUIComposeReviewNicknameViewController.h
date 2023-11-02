
@interface SKUIComposeReviewNicknameViewController : SUViewController <SKUIComposeReviewNicknameDelegate> {
    <SKUIComposeReviewNicknameDelegate> * _delegate;
    SKUIComposeReviewNicknameView * _nicknameView;
    UIScrollView * _scrollView;
    SKUIBarButtonItemSubmitWithAnimation * _submitButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIComposeReviewNicknameDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIComposeReviewNicknameView *nicknameView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) SKUIBarButtonItemSubmitWithAnimation *submitButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_setupBarButtonItems;
- (void)_setupNicknameView;
- (void)_setupScrollView;
- (void)_submit;
- (void)_updateConfirmState;
- (id)delegate;
- (id)nicknameView;
- (id)scrollView;
- (void)setDelegate:(id)arg1;
- (void)setNicknameView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSubmitButton:(id)arg1;
- (void)showSendAnimationInNavigationBarWithCompletion:(id /* block */)arg1;
- (id)submitButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
