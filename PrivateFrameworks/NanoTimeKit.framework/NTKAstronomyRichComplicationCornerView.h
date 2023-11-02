
@interface NTKAstronomyRichComplicationCornerView : CDRichComplicationCornerTextCustomView {
    NTKAstronomyRichComplicationContentView * _astronomyContentView;
}

- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)_outerView;
- (void)_updateInnerLabel;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (void)setEditing:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
