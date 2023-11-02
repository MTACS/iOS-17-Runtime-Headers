
@interface NTKRichComplicationBaseCircularSwiftUIView : NTKRichComplicationCircularBaseView {
    CDComplicationHostingView * _swiftUIView;
}

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
