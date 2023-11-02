
@interface NTKUtilitySmallRingTextComplicationView : NTKUtilitySmallRingComplicationView {
    CLKUIColoringLabel * _label;
}

@property (nonatomic, readonly) CLKUIColoringLabel *label;

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (void)_setLabelText:(id)arg1;
- (void)_updateForTemplateChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;

@end
