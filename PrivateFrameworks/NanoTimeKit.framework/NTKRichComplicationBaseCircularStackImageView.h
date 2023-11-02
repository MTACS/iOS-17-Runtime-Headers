
@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView {
    CDRichComplicationImageView * _line1ImageView;
}

@property (nonatomic, retain) CDRichComplicationImageView *line1ImageView;

- (void).cxx_destruct;
- (id)line1ImageView;
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)arg1;
- (void)setLine1ImageView:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
