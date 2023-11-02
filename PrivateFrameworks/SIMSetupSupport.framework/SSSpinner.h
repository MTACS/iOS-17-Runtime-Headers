
@interface SSSpinner : UIStackView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _label;
}

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (retain) UILabel *label;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)initWithText:(id)arg1;
- (bool)isAnimating;
- (id)label;
- (void)setActivityIndicator:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateText:(id)arg1;

@end
