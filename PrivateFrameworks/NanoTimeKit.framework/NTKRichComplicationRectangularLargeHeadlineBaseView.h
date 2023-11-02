
@interface NTKRichComplicationRectangularLargeHeadlineBaseView : NTKRichComplicationRectangularBaseView {
    CDRichComplicationImageView * _headerImageView;
    CLKUIColoringLabel * _headerLabel;
    CDComplicationHostingView * _headerSwiftUIView;
}

+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_updateTemplateHeaderWithTextProvider:(id)arg1 imageProvider:(id)arg2 viewData:(id)arg3 reason:(long long)arg4;
- (id)init;
- (void)layoutSubviews;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
