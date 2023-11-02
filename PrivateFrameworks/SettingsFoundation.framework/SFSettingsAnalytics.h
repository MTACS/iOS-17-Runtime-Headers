
@interface SFSettingsAnalytics : NSObject

+ (void)trackingAppAccessTransparencyVisited:(id)arg1;
+ (void)trackingAppActivitySaved;
+ (void)trackingControlValueChanged:(id)arg1 sender:(id)arg2;
+ (void)trackingPerformSelector:(id)arg1 targetString:(id)arg2;
+ (void)trackingRecordAppActivityVisited;
+ (void)trackingSettingsOpenByURL:(bool)arg1 url:(id)arg2;
+ (void)trackingSettingsSearchUsed:(bool)arg1 isUser65AgeOrOlder:(bool)arg2 numberOfSectionsInResults:(unsigned long long)arg3 numberOfTotalResults:(unsigned long long)arg4 searchFromSpotlight:(bool)arg5 methodForEndingSearch:(unsigned long long)arg6 searchResultURL:(id)arg7 searchActivityID:(id)arg8;
+ (void)trackingSettingsSearchUsed:(bool)arg1 isUser65AgeOrOlder:(bool)arg2 searchFromSpotlight:(bool)arg3 searchActivityID:(id)arg4;
+ (void)trackingSettingsSearchUsed:(bool)arg1 numberOfSectionsInResults:(unsigned long long)arg2 numberOfTotalResults:(unsigned long long)arg3 searchFromSpotlight:(bool)arg4 methodForEndingSearch:(unsigned long long)arg5 searchActivityID:(id)arg6;
+ (void)trackingSettingsSearchUsed:(bool)arg1 searchFromSpotlight:(bool)arg2 methodForEndingSearch:(unsigned long long)arg3 searchResultURL:(id)arg4;
+ (void)trackingStateOfRequest:(bool)arg1 askAppsToStopTracking:(bool)arg2;
+ (void)trackingStateOfRequestForSpecificApp:(unsigned long long)arg1 view:(id)arg2;
+ (void)trackingViewControllersVisitedInRootController:(id)arg1;
+ (void)trackingViewVisited;

@end
