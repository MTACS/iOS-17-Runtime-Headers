
@interface _UICalendarDecorationImageView : UIImageView {
    long long  _decorationSize;
}

@property (nonatomic) long long decorationSize;

- (void)_updateSymbolConfiguration;
- (long long)decorationSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDecorationSize:(long long)arg1;

@end
