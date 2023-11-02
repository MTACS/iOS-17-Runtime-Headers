
@interface CAMLivePhotoBadge : CEKBadgeTextView {
    long long  _irisMode;
}

@property (nonatomic) long long irisMode;

- (void)_updateTextAndColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)irisMode;
- (void)setIrisMode:(long long)arg1;

@end
