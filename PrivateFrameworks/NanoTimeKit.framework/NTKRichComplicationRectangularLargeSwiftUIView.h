
@interface NTKRichComplicationRectangularLargeSwiftUIView : NTKRichComplicationRectangularHeadlineLargeBodyView {
    CDComplicationHostingView * _swiftUIView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)body;
- (id)headerTextProviderFromTemplate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
