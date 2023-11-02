
@interface VUIMetricsMediaEvent : NSObject

+ (id)_convertToMs:(id)arg1;
+ (id)_metricsDataFromTVPMediaItem:(id)arg1 contentPosition:(id)arg2 isBackground:(bool)arg3 isAmbient:(bool)arg4 actionType:(id)arg5;
+ (id)clickMetricsDataFromTVPMediaItem:(id)arg1;
+ (id)generateSkipImpressionsFromSkipInfo:(id)arg1;
+ (id)impressionsMetricsDataFromTVPMediaItem:(id)arg1;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)arg1 contentPosition:(id)arg2 isAmbient:(bool)arg3 actionType:(id)arg4;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)arg1 isAmbient:(bool)arg2;
+ (void)recordClickOfSkipInfo:(id)arg1 onMediaItem:(id)arg2;
+ (void)recordImpressionsOfSkipButton:(id)arg1 onMediaItem:(id)arg2;
+ (void)recordPlay:(id)arg1 isLaunchingExtras:(bool)arg2;
+ (void)recordPlayOfTVPMediaItem:(id)arg1;
+ (void)recordPunchout:(id)arg1 isUrlForPlay:(bool)arg2;

@end
