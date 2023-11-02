
@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_templateWithShouldDisplayIdealizeState:(bool)arg1;
- (bool)alwaysShowIdealizedTemplateInSwitcher;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (bool)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;

@end
