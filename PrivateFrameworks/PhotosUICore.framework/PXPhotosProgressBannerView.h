
@interface PXPhotosProgressBannerView : UIView {
    UITextView * _subtitleTextView;
    UITextView * _titleTextView;
}

@property (nonatomic, readonly) UITextView *subtitleTextView;
@property (nonatomic, readonly) UITextView *titleTextView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitleTextView;
- (id)titleTextView;

@end
