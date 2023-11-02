
@interface VUIStillWatchingAlertPresenter : NSObject {
    double  _timeoutInterval;
}

@property (nonatomic) double timeoutInterval;

+ (void)presentWithTitle:(id)arg1 presentingController:(id)arg2 timeout:(double)arg3 responseHandler:(id /* block */)arg4;

- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
