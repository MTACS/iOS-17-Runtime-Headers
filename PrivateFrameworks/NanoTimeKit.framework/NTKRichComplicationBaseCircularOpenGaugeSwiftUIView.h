
@interface NTKRichComplicationBaseCircularOpenGaugeSwiftUIView : NTKRichComplicationCircularOpenGaugeContentView {
    CDComplicationHostingView * _bottomSwiftUIView;
}

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)bottomView;
- (void)gaugeProvider:(id*)arg1 andCenterTextProvider:(id*)arg2 fromTemplate:(id)arg3;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
