
@interface SearchUICustomViewControllerCell : SearchUICollectionViewCell {
    UIViewController * _embeddedViewController;
    UIView * _hostedView;
}

@property (nonatomic, retain) UIViewController *embeddedViewController;
@property (retain) UIView *hostedView;

- (void).cxx_destruct;
- (id)embeddedViewController;
- (id)hostedView;
- (void)layoutSubviews;
- (void)setEmbeddedViewController:(id)arg1;
- (void)setHostedView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
