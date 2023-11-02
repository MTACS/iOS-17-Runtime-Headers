
@interface AVTFixedSizeViewContainer : UIView {
    UIView * _fixedSizeView;
}

@property (nonatomic, readonly) UIView *fixedSizeView;

- (void).cxx_destruct;
- (id)fixedSizeView;
- (id)initWithFixedSizeView:(id)arg1;
- (void)layoutSubviews;

@end
