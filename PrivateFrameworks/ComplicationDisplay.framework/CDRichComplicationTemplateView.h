
@interface CDRichComplicationTemplateView : CDRichComplicationView <CDTemplateComplicationDisplay> {
    CLKComplicationTemplate * _template;
    bool  _templateWantsPlatter;
}

@property (nonatomic) bool canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CDComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CLKComplicationTemplate *template;
@property (nonatomic) bool templateWantsPlatter;

+ (bool)handlesComplicationTemplate:(id)arg1;

- (void).cxx_destruct;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)complicationTemplate;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)setTemplateWantsPlatter:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (id)template;
- (bool)templateWantsPlatter;
- (unsigned long long)timelineAnimationFadeTypeOverride;
- (long long)tritiumUpdateMode;

@end
