
@interface PSUIBadgeView : UIView {
    UILabel * _badgeLabel;
    double  _baseline;
    double  _cornerRadius;
    double  _fontSize;
    double  _minPadding;
}

@property (nonatomic, retain) UILabel *badgeLabel;
@property (nonatomic) double baseline;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double fontSize;
@property (nonatomic) double minPadding;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)badgeLabel;
- (double)baseline;
- (double)cornerRadius;
- (double)fontSize;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)minPadding;
- (void)setBadgeLabel:(id)arg1;
- (void)setBaseline:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFontSize:(double)arg1;
- (void)setMinPadding:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
