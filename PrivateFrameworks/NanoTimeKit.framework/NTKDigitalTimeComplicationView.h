
@interface NTKDigitalTimeComplicationView : UIView <CDComplicationDisplay, CDTemplateComplicationDisplay> {
    CLKDevice * _device;
    bool  _showsSeconds;
    CLKComplicationTemplate * _template;
    NTKDigitalTimeLabel * _timeLabel;
    NSDate * _timeTravelDate;
    bool  canUseCurvedText;
    <CDComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic) bool canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) <CDComplicationDisplayObserver> *displayObserver;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (nonatomic) bool showsSeconds;
@property (readonly) Class superclass;
@property (nonatomic, retain) CLKComplicationTemplate *template;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NTKDigitalTimeLabel *timeLabel;
@property (nonatomic, retain) NSDate *timeTravelDate;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)arg1;
- (id)_labelFont;
- (bool)canUseCurvedText;
- (id)complicationTemplate;
- (id)device;
- (id)displayObserver;
- (id)font;
- (id)init;
- (void)layoutSubviews;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setDevice:(id)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setShowsSeconds:(bool)arg1;
- (void)setTemplate:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setTimeTravelDate:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (bool)showsSeconds;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)template;
- (id)textColor;
- (id)timeLabel;
- (void)timeOffsetChanged;
- (id)timeTravelDate;
- (unsigned long long)timelineAnimationFadeTypeOverride;
- (void)updateDate;

@end
