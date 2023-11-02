
@interface HMDMediaPlaybackActionEvent : HMMLogEvent <HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMMCoreAnalyticsLogging> {
    NSArray * _accessories;
    NSString * _clientMetricIdentifier;
    bool  _isPlaybackArchivePresent;
    unsigned long long  _numAccessoriesInHome;
    unsigned long long  _numNonEmptyScenesInHome;
    unsigned long long  _numberOfMediaProfiles;
    NSNumber * _playbackStateNumber;
    NSString * _sourceClientName;
    NSNumber * _sourceNumber;
    NSNumber * _volumeNumber;
}

@property (readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *clientMetricIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool isPlaybackArchivePresent;
@property (nonatomic, readonly) unsigned long long numAccessoriesInHome;
@property (nonatomic, readonly) unsigned long long numNonEmptyScenesInHome;
@property (readonly) unsigned long long numberOfMediaProfiles;
@property (readonly, copy) NSNumber *playbackStateNumber;
@property (readonly, copy) NSString *playbackStateString;
@property (readonly, copy) NSString *sourceClientName;
@property (readonly, copy) NSNumber *sourceNumber;
@property (readonly, copy) NSString *sourceString;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *volumeNumber;

- (void).cxx_destruct;
- (id)accessories;
- (id)biomeEventsRepresentationForLogObserver:(id)arg1;
- (id)clientMetricIdentifier;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithIsPlaybackArchivePresent:(bool)arg1 playbackStateNumber:(id)arg2 volumeNumber:(id)arg3 sourceNumber:(id)arg4 sourceClientName:(id)arg5 accessories:(id)arg6;
- (bool)isPlaybackArchivePresent;
- (id)microLocationMetadataForLogEventObserver:(id)arg1;
- (unsigned long long)microLocationScanTriggerTypeForLogEventObserver:(id)arg1;
- (unsigned long long)numAccessoriesInHome;
- (unsigned long long)numNonEmptyScenesInHome;
- (unsigned long long)numberOfMediaProfiles;
- (id)playbackStateNumber;
- (id)playbackStateString;
- (bool)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(id)arg1;
- (bool)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(id)arg1;
- (id)sourceClientName;
- (id)sourceNumber;
- (id)sourceString;
- (id)volumeNumber;

@end
