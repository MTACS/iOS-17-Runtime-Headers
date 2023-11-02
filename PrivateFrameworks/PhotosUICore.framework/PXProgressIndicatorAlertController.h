
@interface PXProgressIndicatorAlertController : NSObject <PXMutableProgressIndicatorAlertController> {
    UIAlertController * _alertController;
    NSDate * _alertPresentedDate;
    double  _delay;
    bool  _isCanceled;
    bool  _isInternalUIAllowed;
    NSString * _label;
    double  _minimumDisplayDuration;
    NSString * _title;
    UIWindow * _window;
}

@property (nonatomic) double delay;
@property (nonatomic) bool isInternalUIAllowed;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) double minimumDisplayDuration;
@property (nonatomic, copy) NSString *title;

+ (id)beginShowingModalProgressWithConfiguration:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_dismissAlert:(id /* block */)arg1;
- (void)_presentAlert;
- (void)_startShowingProgress;
- (void)dealloc;
- (double)delay;
- (id)init;
- (bool)isInternalUIAllowed;
- (id)label;
- (double)minimumDisplayDuration;
- (void)setDelay:(double)arg1;
- (void)setIsInternalUIAllowed:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinimumDisplayDuration:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)stopShowing;
- (void)stopShowing:(id /* block */)arg1;
- (id)title;

@end
