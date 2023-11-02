
@interface AMSUIWebViewImageWrapper : AMSUICommonView {
    double  _inset;
    UIView * _view;
}

@property (nonatomic) double inset;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (id)initWithView:(id)arg1 topInset:(double)arg2;
- (double)inset;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setInset:(double)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
