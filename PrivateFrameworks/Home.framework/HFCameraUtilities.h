
@interface HFCameraUtilities : NSObject

+ (id)_fullTimeStringFromDate:(id)arg1 shouldUseTwentyFourHourTime:(bool)arg2;
+ (id)_shortTimeStringFromDate:(id)arg1 shouldUseTwentyFourHourTime:(bool)arg2;
+ (bool)_shouldUseTwentyFourHourTime;
+ (void)acceptEmployeeCameraFeedbackConsent;
+ (id)attributedFullTimeStringFromDate:(id)arg1;
+ (id)attributedShortTimeStringFromDate:(id)arg1;
+ (id)attributedStringFromDateString:(id)arg1;
+ (id)attributedStringFromTwentyFourHourDateString:(id)arg1;
+ (void)cacheScrubberTimeScale:(double)arg1;
+ (double)cachedScrubberTimeScale;
+ (id)cameraFeedbackQueryString;
+ (long long)compareCreationDateOfFileAtURL:(id)arg1 toDaysFromNow:(long long)arg2;
+ (id)dayStringFromDate:(id)arg1;
+ (double)durationOfRecordingAtURL:(id)arg1;
+ (double)elapsedTimeSinceMidnightForEvent:(id)arg1;
+ (bool)eventSpansMultipleDays:(id)arg1;
+ (bool)forceDisplayMultiCameraUpgradeBanner;
+ (bool)forceDisplayOfDismissedCameraUpgradeBanner;
+ (bool)forceDisplaySingleCameraUpgradeBanner;
+ (id)fullTimeStringFromDate:(id)arg1;
+ (bool)hasAcceptedCameraFeedbackEmployeeConsent;
+ (bool)internalCameraFeedbackSupported;
+ (bool)isDateToday:(id)arg1;
+ (bool)isDateYesterday:(id)arg1;
+ (bool)isMP4FileAtURL:(id)arg1;
+ (bool)isTimelapseVideoFileAtURL:(id)arg1;
+ (bool)isVideoFileWithStrippedAudioAtURL:(id)arg1;
+ (id)liveStringFromDate:(id)arg1;
+ (id)localizerKeyDayNameFromDate:(id)arg1;
+ (bool)markCachedVideoAsGreenInTimeline;
+ (id)overrideVideoCacheDurationLimit;
+ (id)overrideVideoDiskCacheLimit;
+ (id)percentageOfDurationUntilNextDayForEvent:(id)arg1;
+ (id)shortTimeStringFromDate:(id)arg1;
+ (bool)shouldCacheScrubberTimeScale;
+ (bool)shouldDisableHeroFrameDownloads;
+ (bool)shouldDisplayInternalUpgradeViews;
+ (bool)shouldDisplayInternalViews;
+ (bool)shouldPurgePosterFrameCache;
+ (bool)shouldPurgeVideoFileCache;
+ (void)toggleDisplayOfInternalUpgradeViews:(bool)arg1;
+ (bool)treatAllClipsAsUnanalyzed;
+ (id)twelveHourTimeStringFromDate:(id)arg1;
+ (id)twentyFourHourLiveStringFromDate:(id)arg1;
+ (id)twentyFourHourTimeStringFromDate:(id)arg1;
+ (id)videoCachesDirectoryURL;
+ (id)videoDestinationURLForCameraClip:(id)arg1;
+ (id)videoDestinationURLForCameraClip:(id)arg1 strippedAudio:(bool)arg2;

@end
