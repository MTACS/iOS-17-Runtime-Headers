
@interface NTKAstronomyRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKAstronomyRichComplicationContentView * _astronomyContentView;
}

- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (long long)_desaturatedFilterStyle;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_setupContentViewForFamily:(long long)arg1;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (void)setEditing:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
