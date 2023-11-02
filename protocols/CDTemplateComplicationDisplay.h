
@protocol CDTemplateComplicationDisplay <CDComplicationDisplay, CLKUITimeTravel>

@required

+ (bool)handlesComplicationTemplate:(CLKComplicationTemplate *)arg1;

- (CLKComplicationTemplate *)complicationTemplate;
- (void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 reason:(long long)arg2;

@optional

+ (long long)layoutOverride;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (unsigned long long)timelineAnimationFadeTypeOverride;

@end
