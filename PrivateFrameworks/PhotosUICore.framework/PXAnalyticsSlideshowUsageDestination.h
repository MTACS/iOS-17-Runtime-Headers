
@interface PXAnalyticsSlideshowUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {
    NSMutableDictionary * _slideshowInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isUserCancelledError:(id)arg1;
+ (id)exportCPAnalyticsIntervalName;
+ (id)exportEndedCPAnalyticsEventNameForSuccess:(bool)arg1 error:(id)arg2 duration:(double)arg3;
+ (id)exportEndedCoreAnalyticsEventName;
+ (id)exportFailedCPAnalyticsEventName;
+ (id)payloadAppSuspensionCountKey;
+ (id)payloadAssetCountKeyForPlaybackStyle:(long long)arg1;
+ (id)payloadExportDurationKey;
+ (id)payloadExportEndStateKey;
+ (id)payloadExportErrorCodeKey;
+ (id)payloadExportErrorDomainKey;
+ (id)payloadPauseCountKey;
+ (id)payloadTimeFractionPlayedKey;
+ (id)payloadTimePausedKey;
+ (id)payloadTotalAssetCountKey;
+ (id)payloadTotalPlaybackTimeKey;
+ (id)playbackEndedCPAnalyticsEventNameForTerminationType:(long long)arg1;
+ (id)playbackEndedCPAnalyticsEventNameForTimeFractionPlayed:(double)arg1;
+ (id)playbackEndedCoreAnalyticsEventName;
+ (id)playbackStartedCPAnalyticsEventNameForTotalAssetCount:(long long)arg1;
+ (id)playbackStartedCoreAnalyticsEventName;

- (void).cxx_destruct;
- (id)_createDefaultPayloadForInfo:(id)arg1;
- (id)_createInfoForEvent:(id)arg1;
- (id)_existingInfoForEvent:(id)arg1;
- (id)_existingInfoForEvent:(id)arg1 pop:(bool)arg2;
- (id)_payloadFilteredForCoreAnlaytics:(id)arg1;
- (id)_popInfoForEndEvent:(id)arg1;
- (id)init;
- (void)processEvent:(id)arg1;

@end
