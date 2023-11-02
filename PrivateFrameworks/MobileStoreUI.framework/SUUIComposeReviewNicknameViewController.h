
@interface SUUIComposeReviewNicknameViewController : SUViewController <SUUIComposeReviewNicknameDelegate> {
    <SUUIComposeReviewNicknameDelegate> * _delegate;
    SUUIComposeReviewNicknameView * _nicknameView;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIComposeReviewNicknameDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIComposeReviewNicknameView *nicknameView;
@property (nonatomic, retain) UIScrollView *scrollView;
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
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
