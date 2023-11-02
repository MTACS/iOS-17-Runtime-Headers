
@interface EXPlaceholderViewController : UIViewController <_EXHostViewControllerDelegate> {
    UIActivityIndicatorView * _activityView;
    UIImageView * _completeIcon;
    unsigned long long  _state;
    NSTimer * _timer;
}

@property (retain) UIActivityIndicatorView *activityView;
@property (retain) UIImageView *completeIcon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property NSTimer *timer;

- (void).cxx_destruct;
- (id)activityView;
- (id)completeIcon;
- (void)hostViewController:(id)arg1 didBeginHosting:(id)arg2;
- (void)hostViewController:(id)arg1 didEndHosting:(id)arg2 error:(id)arg3;
- (void)hostViewController:(id)arg1 didPrepareToHost:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (void)setActivityView:(id)arg1;
- (void)setCompleteIcon:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (unsigned long long)state;
- (id)timer;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
