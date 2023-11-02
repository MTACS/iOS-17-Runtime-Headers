
@interface WBSThemeColorUtilities : NSObject

+ (id)overrideTabColorForThemeColor:(id)arg1;
+ (bool)shouldIgnoreThemeColorForContrastWithActiveTab:(id)arg1 privateBrowsingEnabled:(bool)arg2;
+ (bool)shouldOverrideTintColorForThemeColor:(id)arg1;
+ (id)updateThemeColorForWebView:(id)arg1 darkModeEnabled:(bool)arg2;
+ (id)updateThemeColorForWebView:(id)arg1 darkModeEnabled:(bool)arg2 allowFallbackColors:(bool)arg3 updateUnderPageBackgroundColor:(bool)arg4;

@end
