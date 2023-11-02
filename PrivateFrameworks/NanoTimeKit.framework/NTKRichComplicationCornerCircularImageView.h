
@interface NTKRichComplicationCornerCircularImageView : CDRichComplicationCornerBaseCircularView {
    CDRichComplicationImageView * _imageView;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_circularView;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (void)_updatePlatterColor;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
