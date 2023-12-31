
@interface VUINowPlayingConfig : NSObject {
    double  _alertIdleTimeout;
    bool  _allowQOSReportingForiTunesLibraryPlayback;
    bool  _convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
    double  _liveSportsStartFromBeginningOffset;
    double  _liveStreamOverrunExtension;
    double  _liveStreamStartAndEndTimeBadMetadataCutoff;
    double  _liveStreamStartTimeAdjustmentSlopFactor;
    NSArray * _mediaCharacteristicsToLocalize;
    NSDictionary * _mediaLocalizationKeyMapping;
    NSArray * _mediaTypesExcludedFromReporting;
    bool  _refetchesUpNextDataForLive;
    bool  _refetchesUpNextDataForVOD;
    bool  _shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;
    bool  _shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;
    bool  _shouldSendLiveStreamStartAndEndTimesToAVKit;
    bool  _showsLozengeForLivePlayback;
    bool  _showsStillWatchingAlert;
    bool  _showsUpNextInHUDForLive;
    bool  _showsUpNextInHUDForVOD;
    double  _stillWatchingAlertDuration;
}

@property (nonatomic) double alertIdleTimeout;
@property (nonatomic) bool allowQOSReportingForiTunesLibraryPlayback;
@property (nonatomic) bool convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
@property (nonatomic) double liveSportsStartFromBeginningOffset;
@property (nonatomic) double liveStreamOverrunExtension;
@property (nonatomic) double liveStreamStartAndEndTimeBadMetadataCutoff;
@property (nonatomic) double liveStreamStartTimeAdjustmentSlopFactor;
@property (nonatomic, copy) NSArray *mediaCharacteristicsToLocalize;
@property (nonatomic, copy) NSDictionary *mediaLocalizationKeyMapping;
@property (nonatomic, copy) NSArray *mediaTypesExcludedFromReporting;
@property (nonatomic) bool refetchesUpNextDataForLive;
@property (nonatomic) bool refetchesUpNextDataForVOD;
@property (nonatomic) bool shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;
@property (nonatomic) bool shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;
@property (nonatomic) bool shouldSendLiveStreamStartAndEndTimesToAVKit;
@property (nonatomic) bool showsLozengeForLivePlayback;
@property (nonatomic) bool showsStillWatchingAlert;
@property (nonatomic) bool showsUpNextInHUDForLive;
@property (nonatomic) bool showsUpNextInHUDForVOD;
@property (nonatomic) double stillWatchingAlertDuration;

- (void).cxx_destruct;
- (double)alertIdleTimeout;
- (bool)allowQOSReportingForiTunesLibraryPlayback;
- (bool)convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
- (id)init;
- (double)liveSportsStartFromBeginningOffset;
- (double)liveStreamOverrunExtension;
- (double)liveStreamStartAndEndTimeBadMetadataCutoff;
- (double)liveStreamStartTimeAdjustmentSlopFactor;
- (id)mediaCharacteristicsToLocalize;
- (id)mediaLocalizationKeyMapping;
- (id)mediaTypesExcludedFromReporting;
- (bool)refetchesUpNextDataForLive;
- (bool)refetchesUpNextDataForVOD;
- (void)setAlertIdleTimeout:(double)arg1;
- (void)setAllowQOSReportingForiTunesLibraryPlayback:(bool)arg1;
- (void)setConvertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero:(bool)arg1;
- (void)setLiveSportsStartFromBeginningOffset:(double)arg1;
- (void)setLiveStreamOverrunExtension:(double)arg1;
- (void)setLiveStreamStartAndEndTimeBadMetadataCutoff:(double)arg1;
- (void)setLiveStreamStartTimeAdjustmentSlopFactor:(double)arg1;
- (void)setMediaCharacteristicsToLocalize:(id)arg1;
- (void)setMediaLocalizationKeyMapping:(id)arg1;
- (void)setMediaTypesExcludedFromReporting:(id)arg1;
- (void)setRefetchesUpNextDataForLive:(bool)arg1;
- (void)setRefetchesUpNextDataForVOD:(bool)arg1;
- (void)setShouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime:(bool)arg1;
- (void)setShouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime:(bool)arg1;
- (void)setShouldSendLiveStreamStartAndEndTimesToAVKit:(bool)arg1;
- (void)setShowsLozengeForLivePlayback:(bool)arg1;
- (void)setShowsStillWatchingAlert:(bool)arg1;
- (void)setShowsUpNextInHUDForLive:(bool)arg1;
- (void)setShowsUpNextInHUDForVOD:(bool)arg1;
- (void)setStillWatchingAlertDuration:(double)arg1;
- (bool)shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;
- (bool)shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;
- (bool)shouldSendLiveStreamStartAndEndTimesToAVKit;
- (bool)showsLozengeForLivePlayback;
- (bool)showsStillWatchingAlert;
- (bool)showsUpNextInHUDForLive;
- (bool)showsUpNextInHUDForVOD;
- (double)stillWatchingAlertDuration;

@end
