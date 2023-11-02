
@interface NTKRichComplicationBaseCircularClosedGaugeSwiftUIView : NTKRichComplicationCircularClosedGaugeContentView {
    CDComplicationHostingView * _swiftUIView;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)gaugeProviderFromTemplate:(id)arg1;
- (id)innerView;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
