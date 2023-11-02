
@interface NTKRichComplicationBaseCircularOpenGaugeImageView : NTKRichComplicationCircularOpenGaugeContentView {
    CDRichComplicationImageView * _bottomImageView;
}

@property (nonatomic, retain) CDRichComplicationImageView *bottomImageView;

- (void).cxx_destruct;
- (id)bottomImageView;
- (id)bottomView;
- (void)gaugeProvider:(id*)arg1 andCenterTextProvider:(id*)arg2 fromTemplate:(id)arg3;
- (void)setBottomImageView:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
