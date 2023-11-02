
@interface NTKRichComplicationCircularStackTextView : NTKRichComplicationBaseCircularStackTextView

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (bool)supportsComplicationFamily:(long long)arg1;

- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)init;
- (void)makeBackgroundTransparent;

@end
