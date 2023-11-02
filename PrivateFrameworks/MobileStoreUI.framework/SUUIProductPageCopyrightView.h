
@interface SUUIProductPageCopyrightView : UIView {
    SUUIColorScheme * _colorScheme;
    UILabel * _copyrightLabel;
}

@property (nonatomic, retain) SUUIColorScheme *colorScheme;
@property (nonatomic, retain) NSString *copyrightString;

- (void).cxx_destruct;
- (id)colorScheme;
- (id)copyrightString;
- (void)layoutSubviews;
- (void)setColorScheme:(id)arg1;
- (void)setCopyrightString:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
