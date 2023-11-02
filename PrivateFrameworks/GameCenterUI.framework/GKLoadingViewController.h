
@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    double  _loadingIndicatorDelay;
    GKLoadableContentStateMachine * _loadingMachine;
    NSArray * _viewsToHideWhileLoading;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double loadingIndicatorDelay;
@property (nonatomic, retain) GKLoadableContentStateMachine *loadingMachine;
@property (nonatomic, retain) NSString *loadingState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewsToHideWhileLoading;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitLoadedState;
- (void)didExitLoadingState;
- (void)didExitRefreshingState;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)loadingIndicatorDelay;
- (id)loadingMachine;
- (id)loadingState;
- (void)setActivityIndicator:(id)arg1;
- (void)setLoadingIndicatorDelay:(double)arg1;
- (void)setLoadingMachine:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (void)setViewsToHideHidden:(bool)arg1;
- (void)setViewsToHideWhileLoading:(id)arg1;
- (void)showLoadingIndicator;
- (id)viewsToHideWhileLoading;

@end
