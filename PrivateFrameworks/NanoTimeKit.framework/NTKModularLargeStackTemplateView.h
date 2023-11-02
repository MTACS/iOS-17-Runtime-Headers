
@interface NTKModularLargeStackTemplateView : NTKModularTemplateView {
    UIView<CDComplicationImageView> * _body1Glyph;
    CLKUIColoringLabel * _body1Label;
    CLKUIColoringLabel * _body2Label;
    UIView<CDComplicationImageView> * _headerGlyph;
    CLKUIColoringLabel * _headerLeadingLabel;
    CLKUIColoringLabel * _headerTrailingLabel;
    bool  _shouldTruncateHeaderLeadingLabelFirst;
}

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_update;
- (void)_updateForStandardBodyTemplate:(id)arg1;
- (void)_updateForTallBodyTemplate:(id)arg1;
- (void)_updateLabelsMaxWidths;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
