
@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource

+ (bool)acceptsComplicationType:(unsigned long long)arg1 withFamily:(long long)arg2 forDevice:(id)arg3;

- (id)_appBackgroundColor;
- (id)_appTintColor;
- (id)_appTitle;
- (id)_circularTemplateMedium:(bool)arg1;
- (id)_complicationApplicationIdentifier;
- (id)_complicationLaunchURL;
- (id)_currentTimelineEntry;
- (id)_extraLarge;
- (id)_fullColorImageProvider;
- (id)_graphicExtraLargeTemplate;
- (id)_modularLargeTemplate;
- (id)_modularSmallTemplate;
- (id)_signatureBezelTemplate;
- (id)_signatureCircularTemplate;
- (id)_signatureCornerTemplate;
- (id)_symbolAppFullColorImageProviderIfSupported;
- (id)_symbolAppImageProviderIfSupported;
- (id)_symbolName;
- (id)_symbolSize;
- (id)_symbolSizeforMailApp;
- (id)_symbolSizeforMapsApp;
- (id)_symbolSizeforTinCanApp;
- (id)_tinCanAppTintColor;
- (id)_tintableAppImageProvider;
- (id)_utilitarianLargeTemplate;
- (id)_utilitarianSmallTemplate;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (unsigned long long)timelineAnimationBehavior;

@end
