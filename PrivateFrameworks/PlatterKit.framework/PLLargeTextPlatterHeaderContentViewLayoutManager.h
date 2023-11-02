
@interface PLLargeTextPlatterHeaderContentViewLayoutManager : PLPlatterHeaderContentViewLayoutManager {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedTitleBoundingRectSize;
    unsigned long long  _cachedTitleNumberOfLines;
    NSStringDrawingContext * _drawingContext;
    double  _referenceWidth;
}

+ (double)contentBaselineToBoundsBottomWithFont:(id)arg1 boundsWidth:(double)arg2 scale:(double)arg3;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_boundingRectSizeForLabel:(id)arg1 width:(double)arg2 numberOfLines:(inout unsigned long long*)arg3;
- (double)_dateLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dateLabelBoundsThatFitsWidth:(double)arg1;
- (id)_dateLabelFont;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextUtilityLabelBaselineOffset;
- (double)_titleLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleLabelBoundsThatFitsWidth:(double)arg1;
- (unsigned long long)_titleLabelNumberOfLinesThatFitsWidth:(double)arg1;
- (void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_utilityViewSizeThatFitsWidth:(double)arg1;
- (double)contentBaseline;
- (double)headerHeightForWidth:(double)arg1;
- (void)invalidateCachedSizeInfo;
- (void)layoutDateLabelWithScale:(double)arg1;
- (void)layoutIconButtonsWithScale:(double)arg1;
- (void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2;
- (void)layoutUtilityButtonWithScale:(double)arg1;

@end
