
@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {
    bool  _calculatedFontSize;
    CLKUIColoringLabel * _row1Column1Label;
    CLKUIColoringLabel * _row1Column2Label;
    CLKUIColoringLabel * _row2Column1Label;
    CLKUIColoringLabel * _row2Column2Label;
}

@property (nonatomic, readonly) CLKComplicationTemplateModularSmallColumnsText *complicationTemplate;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_bodyFontOfSize:(double)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (id)_headerFontOfSize:(double)arg1;
- (void)_layoutContentView;
- (id)_newLabelSubview;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
