
@interface NTKSolarRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKSolarRichComplicationFullColorImageView * _solarImageView;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_updateWithLocation:(id)arg1 useIdealizedTime:(bool)arg2 forceUpdate:(bool)arg3 animated:(bool)arg4;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
