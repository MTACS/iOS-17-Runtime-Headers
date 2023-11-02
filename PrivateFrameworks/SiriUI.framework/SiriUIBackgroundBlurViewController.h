
@interface SiriUIBackgroundBlurViewController : UIViewController {
    bool  _backgroundBlurIsVisible;
    SiriUIBackgroundBlurView * _backgroundBlurView;
    <SiriUIBackgroundBlurViewControllerDelegate> * _backgroundBlurViewControllerDelegate;
    long long  _backgroundBlurVisibleReason;
}

@property (nonatomic) bool backgroundBlurIsVisible;
@property (nonatomic, retain) SiriUIBackgroundBlurView *backgroundBlurView;
@property (nonatomic) <SiriUIBackgroundBlurViewControllerDelegate> *backgroundBlurViewControllerDelegate;
@property (nonatomic) long long backgroundBlurVisibleReason;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)backgroundBlurIsVisible;
- (id)backgroundBlurView;
- (id)backgroundBlurViewControllerDelegate;
- (long long)backgroundBlurVisibleReason;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)requestBackgroundBlurVisible:(bool)arg1 forReason:(long long)arg2;
- (void)setBackgroundBlurIsVisible:(bool)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (void)setBackgroundBlurViewControllerDelegate:(id)arg1;
- (void)setBackgroundBlurVisibleReason:(long long)arg1;
- (void)viewDidLoad;

@end
