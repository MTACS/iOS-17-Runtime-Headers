
@interface DCLongRunningTaskController : NSObject <DCProgressViewControllerDelegate> {
    id /* block */  _completionBlock;
    double  _intervalBeforeOpeningProgressDialog;
    bool  _isCancelled;
    id  _keepAlive;
    NSDate * _lastAccessibilityAnnouncementDate;
    NSDate * _openProgressDate;
    NSProgress * _progress;
    id /* block */  _progressToStringTransformer;
    DCProgressViewController * _progressViewController;
    bool  _progressViewControllerDidFinishPresenting;
    bool  _shouldDismissProgressViewController;
    bool  _shouldShowCancelButton;
    bool  _shouldShowCircularProgress;
    id /* block */  _updateProgressUIBlock;
    UIViewController * _viewControllerToPresentFrom;
    UIWindow * _window;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) double intervalBeforeOpeningProgressDialog;
@property (nonatomic) bool isCancelled;
@property (nonatomic, retain) id keepAlive;
@property (nonatomic, retain) NSDate *lastAccessibilityAnnouncementDate;
@property (nonatomic, retain) NSDate *openProgressDate;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) id /* block */ progressToStringTransformer;
@property (nonatomic, retain) DCProgressViewController *progressViewController;
@property (nonatomic) bool progressViewControllerDidFinishPresenting;
@property (nonatomic) bool shouldDismissProgressViewController;
@property (nonatomic) bool shouldShowCancelButton;
@property (nonatomic) bool shouldShowCircularProgress;
@property (nonatomic, copy) id /* block */ updateProgressUIBlock;
@property (nonatomic, retain) UIViewController *viewControllerToPresentFrom;
@property (nonatomic, retain) UIWindow *window;

+ (void)setMainWindow:(id)arg1;

- (void).cxx_destruct;
- (void)closeProgressDialog;
- (void)completeTaskIfNecessary;
- (id /* block */)completionBlock;
- (id)init;
- (id)initWithWindow:(id)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;
- (double)intervalBeforeOpeningProgressDialog;
- (bool)isCancelled;
- (id)keepAlive;
- (id)lastAccessibilityAnnouncementDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)openProgressDate;
- (void)openProgressDialog;
- (id)progress;
- (id /* block */)progressToStringTransformer;
- (id)progressViewController;
- (bool)progressViewControllerDidFinishPresenting;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setIntervalBeforeOpeningProgressDialog:(double)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setKeepAlive:(id)arg1;
- (void)setLastAccessibilityAnnouncementDate:(id)arg1;
- (void)setOpenProgressDate:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressToStringTransformer:(id /* block */)arg1;
- (void)setProgressViewController:(id)arg1;
- (void)setProgressViewControllerDidFinishPresenting:(bool)arg1;
- (void)setShouldDismissProgressViewController:(bool)arg1;
- (void)setShouldShowCancelButton:(bool)arg1;
- (void)setShouldShowCircularProgress:(bool)arg1;
- (void)setUpdateProgressUIBlock:(id /* block */)arg1;
- (void)setViewControllerToPresentFrom:(id)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldDismissProgressViewController;
- (bool)shouldShowCancelButton;
- (bool)shouldShowCircularProgress;
- (void)startTask:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)updateProgress;
- (id /* block */)updateProgressUIBlock;
- (id)viewControllerToPresentFrom;
- (void)willDismissProgressViewController:(id)arg1;
- (id)window;

@end
