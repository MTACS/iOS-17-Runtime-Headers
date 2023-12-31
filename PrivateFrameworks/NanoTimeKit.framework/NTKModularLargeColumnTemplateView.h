
@interface NTKModularLargeColumnTemplateView : NTKModularTemplateView {
    bool  _useNoColumnPadding;
}

@property (nonatomic) bool useNoColumnPadding;

- (void)_enumerateColumnRowsWithBlock:(id /* block */)arg1;
- (void)_layoutRowsOfColumnsWithAlignment:(long long)arg1;
- (id)_newBodyLabelSubview;
- (id)_newHeaderLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_positionLeadingAlignedImageView:(id)arg1 label:(id)arg2 withBaselineOffset:(double)arg3;
- (void)setUseNoColumnPadding:(bool)arg1;
- (bool)useNoColumnPadding;

@end
