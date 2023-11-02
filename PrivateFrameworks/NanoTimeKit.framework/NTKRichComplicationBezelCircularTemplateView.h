
@interface NTKRichComplicationBezelCircularTemplateView : NTKRichComplicationBezelBaseCircularView

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (id)_bezelTextProviderFromTemplate:(id)arg1;
- (id)_circularTemplateFromTemplate:(id)arg1;
- (Class)_circularViewClassFromFromTemplate:(id)arg1;

@end
