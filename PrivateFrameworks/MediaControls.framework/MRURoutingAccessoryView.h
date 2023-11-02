
@interface MRURoutingAccessoryView : UIView <MRUVisualStylingProviderObserver> {
    UIActivityIndicatorView * _activityView;
    UIImageView * _imageView;
    long long  _state;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) long long state;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActivityView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (id)stylingProvider;
- (void)updateImageViewVisualStyle;
- (void)updateState;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
