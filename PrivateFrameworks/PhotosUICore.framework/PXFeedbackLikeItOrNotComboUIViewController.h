
@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController {
    UIActivityIndicatorView * __activityIndicatorView;
    bool  __showsActivityIndicator;
    <PXFeedbackFormDelegate> * _delegate;
}

@property (nonatomic, readonly) UIActivityIndicatorView *_activityIndicatorView;
@property (nonatomic) bool _showsActivityIndicator;
@property (nonatomic, retain) <PXFeedbackFormDelegate> *delegate;

- (void).cxx_destruct;
- (id)_activityIndicatorView;
- (void)_dislikedIt:(id)arg1;
- (void)_doFileRadar:(id)arg1;
- (void)_fileRadar:(id)arg1;
- (void)_likedIt:(id)arg1;
- (void)_provideFeedback:(id)arg1;
- (bool)_showsActivityIndicator;
- (void)cancelFeedback:(id)arg1;
- (id)delegate;
- (void)finishWithSuccess:(bool)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsActivityIndicator:(bool)arg1;
- (void)set_showsActivityIndicator:(bool)arg1;
- (void)showMoreFeedbackForm;
- (void)viewDidLoad;

@end
