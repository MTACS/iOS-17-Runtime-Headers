
@interface NTKWorldClockRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CDRichComplicationTintedPlatterColorOverridable> {
    UIColor * _daytimeHandsDotColor;
    UIColor * _nighttimeHandsDotColor;
    NTKWorldClockGraphicCircularView * _worldClockCircularView;
}

@property (nonatomic, retain) UIColor *daytimeBackgroundColor;
@property (nonatomic, retain) UIColor *daytimeHandsColor;
@property (nonatomic, retain) UIColor *daytimeHandsDotColor;
@property (nonatomic, retain) UIColor *nighttimeBackgroundColor;
@property (nonatomic, retain) UIColor *nighttimeHandsColor;
@property (nonatomic, retain) UIColor *nighttimeHandsDotColor;

- (void).cxx_destruct;
- (void)_applyPaused;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (id)daytimeBackgroundColor;
- (id)daytimeHandsColor;
- (id)daytimeHandsDotColor;
- (void)dealloc;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (void)makeBackgroundTransparent;
- (id)nighttimeBackgroundColor;
- (id)nighttimeHandsColor;
- (id)nighttimeHandsDotColor;
- (void)setDaytimeBackgroundColor:(id)arg1;
- (void)setDaytimeHandsColor:(id)arg1;
- (void)setDaytimeHandsDotColor:(id)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)setNighttimeBackgroundColor:(id)arg1;
- (void)setNighttimeHandsColor:(id)arg1;
- (void)setNighttimeHandsDotColor:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTintedFraction:(double)arg1;
- (void)setTintedPlatterColor:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
