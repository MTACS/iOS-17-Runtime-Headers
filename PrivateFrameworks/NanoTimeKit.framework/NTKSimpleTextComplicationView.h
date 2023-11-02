
@interface NTKSimpleTextComplicationView : UIView <CDComplicationDisplay, CDTemplateComplicationDisplay> {
    CLKDevice * _device;
    CLKUIColoringLabel * _label;
    CLKComplicationTemplateSimpleText * _template;
    NSDate * _timeTravelDate;
    bool  canUseCurvedText;
    <CDComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic) bool canUseCurvedText;
@property (nonatomic, readonly) unsigned long long complicationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic) <CDComplicationDisplayObserver> *displayObserver;
@property (nonatomic, retain) CLKFont *font;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) CLKUIColoringLabel *label;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic, retain) CLKComplicationTemplateSimpleText *template;
@property (nonatomic, retain) NSDate *timeTravelDate;

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_defaultFont;
- (void)_updateLabelFrame;
- (bool)canUseCurvedText;
- (id)complicationTemplate;
- (unsigned long long)complicationType;
- (id)device;
- (id)displayObserver;
- (id)font;
- (id)init;
- (id)label;
- (void)layoutSubviews;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setDevice:(id)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTemplate:(id)arg1;
- (void)setTimeTravelDate:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)template;
- (id)timeTravelDate;

@end
