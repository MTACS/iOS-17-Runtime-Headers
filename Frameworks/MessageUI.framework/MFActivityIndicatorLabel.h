
@interface MFActivityIndicatorLabel : UIView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)activityIndicator;
- (id)init;
- (void)setActivityIndicator:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)textLabel;

@end
