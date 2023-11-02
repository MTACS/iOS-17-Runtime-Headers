
@interface WFAssociationStateView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    UIImageView * _imageView;
    long long  _state;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)imageView;
- (void)layoutSubviews;
- (void)setActivityIndicator:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
