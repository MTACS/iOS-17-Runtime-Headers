
@interface PXActivityProgressController : NSObject {
    UIAlertController * _alertController;
    id /* block */  _cancellationHandler;
    UIView * _containerView;
    bool  _didHide;
    bool  _didShow;
    UIView * _dimmingView;
    NSString * _message;
    NSProgress * _progress;
    UIView * _progressContainerView;
    PXActivityProgressViewController * _progressViewController;
    bool  _shouldAutoDisplay;
    bool  _shouldUseProgressText;
    NSString * _title;
    double  _whenDidShow;
    UIWindow * _window;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) bool shouldAutoDisplay;
@property (nonatomic) bool shouldUseProgressText;
@property (nonatomic) bool showCheckmarkOnCompletion;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_didFinishHiding;
- (id)_newProgressContainerView;
- (void)_updateFractionCompletedFromProgress;
- (void)_updatePrimaryText;
- (void)_updateSecondaryText;
- (id /* block */)cancellationHandler;
- (void)dealloc;
- (void)hideAnimated:(bool)arg1 allowDelay:(bool)arg2;
- (id)init;
- (bool)isCancelled;
- (id)message;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setFractionCompleted:(double)arg1;
- (void)setMessage:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setShouldAutoDisplay:(bool)arg1;
- (void)setShouldUseProgressText:(bool)arg1;
- (void)setShowCheckmarkOnCompletion:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldAutoDisplay;
- (bool)shouldUseProgressText;
- (void)showAnimated:(bool)arg1 allowDelay:(bool)arg2;
- (bool)showCheckmarkOnCompletion;
- (id)title;
- (id)window;

@end
