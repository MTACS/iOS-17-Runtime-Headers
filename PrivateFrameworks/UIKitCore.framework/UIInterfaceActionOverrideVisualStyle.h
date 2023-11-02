
@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle {
    bool  _alignActionSeparatorLeadingEdgeWithContent;
    UIInterfaceActionHighlightAttributes * _customActionHighlightAttributes;
    double  _customSelectionHighlightContinuousCornerRadius;
    UIInterfaceActionSeparatorAttributes * _customSeparatorAttributes;
    id /* block */  _customTitleLabelFontProviderForViewState;
}

@property (nonatomic) bool alignActionSeparatorLeadingEdgeWithContent;
@property (nonatomic, retain) UIInterfaceActionHighlightAttributes *customActionHighlightAttributes;
@property double customSelectionHighlightContinuousCornerRadius;
@property (nonatomic, retain) UIInterfaceActionSeparatorAttributes *customSeparatorAttributes;
@property (nonatomic, copy) id /* block */ customTitleLabelFontProviderForViewState;

+ (id)styleOverride;

- (void).cxx_destruct;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (bool)alignActionSeparatorLeadingEdgeWithContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customActionHighlightAttributes;
- (double)customSelectionHighlightContinuousCornerRadius;
- (id)customSeparatorAttributes;
- (id /* block */)customTitleLabelFontProviderForViewState;
- (bool)isEqual:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (void)setAlignActionSeparatorLeadingEdgeWithContent:(bool)arg1;
- (void)setCustomActionHighlightAttributes:(id)arg1;
- (void)setCustomSelectionHighlightContinuousCornerRadius:(double)arg1;
- (void)setCustomSeparatorAttributes:(id)arg1;
- (void)setCustomTitleLabelFontProviderForViewState:(id /* block */)arg1;

@end
