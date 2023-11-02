
@interface NTKRichComplicationRectangularFullSwiftUIView : NTKRichComplicationRectangularFullBaseView {
    CDComplicationHostingView * _swiftUIView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)content;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
