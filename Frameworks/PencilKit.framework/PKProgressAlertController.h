
@interface PKProgressAlertController : UIAlertController {
    <PKProgressAlertControllerDelegate> * _delegate;
    double  _progress;
}

@property (nonatomic) <PKProgressAlertControllerDelegate> *delegate;
@property (nonatomic) double progress;

+ (id)newProgressAlertControllerWithTitle:(id)arg1 cancel:(id)arg2;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (double)progress;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(double)arg1;

@end
