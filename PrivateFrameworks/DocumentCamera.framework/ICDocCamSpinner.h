
@interface ICDocCamSpinner : NSObject {
    UIActivityIndicatorView * _activityIndicator;
    UIViewPropertyAnimator * _animator;
    double  _minimumDuration;
    NSDate * _showDate;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (nonatomic) double minimumDuration;
@property (nonatomic, retain) NSDate *showDate;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)animator;
- (void)hide;
- (id)initWithView:(id)arg1 minimumDuration:(double)arg2;
- (double)minimumDuration;
- (void)setActivityIndicator:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setMinimumDuration:(double)arg1;
- (void)setShowDate:(id)arg1;
- (void)show;
- (id)showDate;

@end
