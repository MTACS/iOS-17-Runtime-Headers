
@interface AIAudiogramLoadingViewController : OBWelcomeController {
    UIActivityIndicatorView * _activityIndicator;
    float  _progress;
    UILabel * _progressLabel;
    UIProgressView * _progressView;
    long long  _style;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) float progress;
@property (nonatomic, retain) UILabel *progressLabel;
@property (nonatomic, retain) UIProgressView *progressView;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (float)progress;
- (id)progressLabel;
- (id)progressView;
- (void)setActivityIndicator:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)showLoadingMessage:(id)arg1;
- (long long)style;
- (void)viewDidLoad;

@end
