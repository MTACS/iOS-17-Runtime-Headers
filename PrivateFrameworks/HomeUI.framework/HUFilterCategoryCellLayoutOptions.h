
@interface HUFilterCategoryCellLayoutOptions : HUGridCellLayoutOptions {
    double  _iconToTextPadding;
    double  _innerBottomMargin;
    double  _innerLeadingMargin;
    double  _innerTopMargin;
    double  _innerTrailingMargin;
    UIFont * _primaryTextFont;
    UIFont * _secondaryTextFont;
}

@property (nonatomic, readonly) double cellHeight;
@property (nonatomic, readonly) double cellSpacing;
@property (nonatomic) double iconToTextPadding;
@property (nonatomic) double innerBottomMargin;
@property (nonatomic) double innerLeadingMargin;
@property (nonatomic) double innerTopMargin;
@property (nonatomic) double innerTrailingMargin;
@property (nonatomic, retain) UIFont *primaryTextFont;
@property (nonatomic, retain) UIFont *secondaryTextFont;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (void).cxx_destruct;
- (double)cellHeight;
- (double)cellSpacing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)iconToTextPadding;
- (double)innerBottomMargin;
- (double)innerLeadingMargin;
- (double)innerTopMargin;
- (double)innerTrailingMargin;
- (id)primaryTextFont;
- (id)secondaryTextFont;
- (void)setIconToTextPadding:(double)arg1;
- (void)setInnerBottomMargin:(double)arg1;
- (void)setInnerLeadingMargin:(double)arg1;
- (void)setInnerTopMargin:(double)arg1;
- (void)setInnerTrailingMargin:(double)arg1;
- (void)setPrimaryTextFont:(id)arg1;
- (void)setSecondaryTextFont:(id)arg1;

@end
