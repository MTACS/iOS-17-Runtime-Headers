
@interface NTKTimelineComplicationController : NTKComplicationController {
    CLKComplicationTemplate * _alwaysOnTemplate;
    NSMapTable * _displayWrappersToUseSampleTemplate;
    bool  _ignoreNewTemplates;
    CLKComplicationTemplate * _lockedTemplate;
}

@property (nonatomic, readonly) CLKComplicationTemplate *alwaysOnTemplate;
@property (nonatomic) bool ignoreNewTemplates;
@property (nonatomic, readonly) CLKComplicationTemplate *lockedTemplate;

+ (bool)_isLegacy;

- (void).cxx_destruct;
- (void)_analyticsAppLaunchForTimeTravelDate:(id)arg1 timelineEntryDate:(id)arg2;
- (unsigned long long)_animationForTimelineEntryTransitionFrom:(id)arg1 to:(id)arg2 withAnimationBehavior:(unsigned long long)arg3;
- (id)activeDisplayTemplateForDisplayWrapper:(id)arg1;
- (id)alwaysOnTemplate;
- (bool)ignoreNewTemplates;
- (id)initWithComplication:(id)arg1 variant:(id)arg2 device:(id)arg3;
- (id)lockedTemplate;
- (void)removeDisplayWrapper:(id)arg1;
- (void)setIgnoreNewTemplates:(bool)arg1;
- (void)setUseSampleTemplate:(bool)arg1 forDisplayWrapper:(id)arg2;
- (bool)useSampleTemplateForDisplayWrapper:(id)arg1;

@end
