
@interface WFConfigurationParameterEditorHostingCellContext : WFParameterEditorHostingCellContext {
    MTVisualStylingProvider * _fillProvider;
    UIColor * _overridingBackgroundColor;
}

@property (nonatomic, retain) MTVisualStylingProvider *fillProvider;
@property (nonatomic, retain) UIColor *overridingBackgroundColor;

- (void).cxx_destruct;
- (id)fillProvider;
- (id)overridingBackgroundColor;
- (void)setFillProvider:(id)arg1;
- (void)setOverridingBackgroundColor:(id)arg1;

@end
