
@interface PPConfigurationGuardedData : NSObject {
    int  analyticsMaximumNumberOfRecords;
    double  analyticsSamplingRate;
    NSArray * availableVariantNames;
    NSDictionary * contactsLabelScoringMap;
    unsigned char  customTaggerMaxTokenCount;
    double  decayedFeedbackCountsHalfLifeDays;
    NSDictionary * differentiallyPrivateEntityLogLevels;
    bool  enableECRMessageTokenCountsPlugin;
    NSArray * engagementKValues;
    float  feedbackSessionLogsExtractionsSamplingRate;
    int  feedbackSessionLogsGeohashLength;
    float  feedbackSessionLogsSamplingRate;
    NSDictionary * feedbackSessionLogsSamplingRateOverrides;
    bool  flattenNamedEntitiesforCoreML;
    bool  flattenTopicsForCoreML;
    double  halfValuePosition;
    NSDictionary * linearModelHyperparameters;
    NSDictionary * locationAlgorithmConfiguration;
    double  locationDecayHalfLifeSeconds;
    bool  locationFeedbackUsesCoreML;
    bool  locationScoringUsesCoreML;
    bool  locationScoringUsesHybrid;
    double  mapsSearchQueryFromDateInterval;
    unsigned int  mapsSearchQueryLimit;
    double  maxEmailHarvestingEligiblityInterval;
    unsigned int  maxItemsInFeatureDictionary;
    unsigned int  maxNEExtractions;
    int  maxNumberMappedTopics;
    int  maxNumberNamedEntities;
    unsigned int  maxRelevantHighlightContacts;
    unsigned long long  maxUniqueTokensInECRTokenCounts;
    NSArray * musicDataCollectionAMPBundleIds;
    bool  musicDataCollectionCollectNonAMPNowPlaying;
    int  musicDataCollectionMaximumRecordsPerType;
    double  musicDataCollectionSamplingRateForAMP;
    double  musicDataCollectionSamplingRateForCTS;
    NSDictionary * namedEntityAlgorithmConfiguration;
    double  namedEntityDecayHalfLifeSeconds;
    bool  namedEntityFeedbackUsesCoreML;
    unsigned int  namedEntityLoadAndMonitorInitialLoadLimit;
    bool  namedEntityScoringUsesCoreML;
    bool  namedEntityScoringUsesHybrid;
    NSString * naturalVariantName;
    unsigned int  navigationMinimumDistanceInMeters;
    double  navigationMinimumTimeInterval;
    unsigned char  nextEventFuzzMinutes;
    double  nonReaderTextWeight;
    bool  notificationExtractionEnabled;
    unsigned char  peopleSuggesterMaxCount;
    int  queryTimeNextEventFromMinutes;
    unsigned int  queryTimeNextEventToMinutes;
    unsigned int  queryTimeOtherEventToMinutes;
    float  recordSourceContactsInitialScore;
    float  recordSourceNonContactsInitialScore;
    float  remoteTopicsMultiplier;
    double  routineExtractionScoreCountWeight;
    double  routineExtractionScoreDecayHalfLifeDays;
    double  routineExtractionScoreDurationWeight;
    bool  safariDataDetectorsEnabledForHighMemoryDevices;
    bool  safariDonationTitleExtractionEnabled;
    double  scoreThreshold;
    float  scoreThresholdForLocation;
    float  scoreThresholdForNamedEntity;
    float  scoreThresholdForTopic;
    unsigned long long  sentenceEmbeddingVersion;
    bool  skipInsignificantEmailExtractions;
    double  socialHighlightCacheTimeoutInterval;
    double  socialHighlightDecayInterval;
    double  socialHighlightFeedbackDeletionInterval;
    unsigned int  socialHighlightMaxNumHighlights;
    double  socialHighlightMetricReportingInterval;
    double  socialHighlightRankedStorageMaxAge;
    unsigned int  socialHighlightTopKCount;
    NSString * sportsMetricsEventName;
    int  sportsMetricsNumberOfLeaguesLogged;
    int  sportsMetricsNumberOfTeamsLogged;
    double  sportsMetricsSamplingRate;
    bool  storeNewExtractions;
    NSDictionary * topicAlgorithmConfiguration;
    _PASCFBurstTrie * topicCalibration;
    double  topicDecayHalfLifeSeconds;
    bool  topicFeedbackUsesCoreML;
    double  topicMappingCoreMLThreshold;
    bool  topicMappingUsesCoreML;
    bool  topicScoringUsesCoreML;
    bool  topicScoringUsesHybrid;
    NSDictionary * topicsAlgorithmMultiplier;
    NSDictionary * topicsSourceMultiplier;
    bool  use2StageScoreInterpreterForLocationScoring;
    bool  use2StageScoreInterpreterForNEScoring;
    bool  use2StageScoreInterpreterForTPScoring;
    bool  useCachedPortraitScores;
    bool  useRawNEExtractionScores;
    NSString * variantName;
}

- (void).cxx_destruct;

@end
