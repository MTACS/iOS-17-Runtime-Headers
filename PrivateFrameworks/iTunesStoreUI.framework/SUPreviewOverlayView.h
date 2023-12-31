
@interface SUPreviewOverlayView : UIView {
    UIView * _borderView;
    UIView * _storePageView;
}

@property (nonatomic, retain) UIView *storePageView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStorePageView:(id)arg1;
- (id)storePageView;

@end
