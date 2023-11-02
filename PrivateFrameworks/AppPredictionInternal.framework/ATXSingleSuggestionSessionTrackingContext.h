
@interface ATXSingleSuggestionSessionTrackingContext : NSObject <NSSecureCoding> {
    NSMutableSet * _appPredictionPanelIds;
    NSMutableArray * _completedSessions;
    NSMutableDictionary * _currentlyTrackedSessions;
    NSUUID * _mostRecentActionSpotlightBlendingCacheUUID;
    NSUUID * _mostRecentAppSpotlightBlendingCacheUUID;
    NSMutableDictionary * _mostRecentClientCacheUpdateUUIDByClientModelId;
    NSUUID * _mostRecentHomescreenBlendingCacheUUID;
    NSMutableSet * _suggestionsWidgetIds;
}

@property (nonatomic, retain) NSMutableSet *appPredictionPanelIds;
@property (nonatomic, retain) NSMutableArray *completedSessions;
@property (nonatomic, retain) NSMutableDictionary *currentlyTrackedSessions;
@property (nonatomic, retain) NSUUID *mostRecentActionSpotlightBlendingCacheUUID;
@property (nonatomic, retain) NSUUID *mostRecentAppSpotlightBlendingCacheUUID;
@property (nonatomic, retain) NSMutableDictionary *mostRecentClientCacheUpdateUUIDByClientModelId;
@property (nonatomic, retain) NSUUID *mostRecentHomescreenBlendingCacheUUID;
@property (nonatomic, retain) NSMutableSet *suggestionsWidgetIds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_persistentIdentifierForSuggestion:(id)arg1;
- (void)_tryMarkCurrentlyTrackedSessionsAsCompleteWithEventDate:(id)arg1;
- (void)_tryPruneSingleSuggestionSessionsIfOverMaxNum;
- (void)_updateCurrentlyTrackedSessionsWithSessionStatus:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 suggestionUUIDs:(id)arg3 blendingCacheUUID:(id)arg4;
- (void)_updateSingleSuggestionSessionsWithHomeScreenUIEvent:(id)arg1;
- (void)_updateSingleSuggestionSessionsWithSpotlightUIEvent:(id)arg1;
- (id)appPredictionPanelIds;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)clientModelIdsToConsider;
- (id)completedSessions;
- (id)currentlyTrackedSessions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMostRecentlySeenHomescreenBlendingCacheUUID:(id)arg1 mostRecentAppSpotlightBlendingCacheUUID:(id)arg2 mostRecentActionSpotlightBlendingCacheUUID:(id)arg3 suggestionsWidgetIds:(id)arg4 appPredictionPanelIds:(id)arg5 mostRecentClientCacheUpdateUUIDByClientModelId:(id)arg6 currentlyTrackedSessions:(id)arg7 completedSessions:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSingleSuggestionSessionTrackingContext:(id)arg1;
- (id)mostRecentActionSpotlightBlendingCacheUUID;
- (id)mostRecentAppSpotlightBlendingCacheUUID;
- (id)mostRecentClientCacheUpdateUUIDByClientModelId;
- (id)mostRecentHomescreenBlendingCacheUUID;
- (id)removeStoredCompletedSessionsAndReturnCompletedSessionsCopy;
- (void)setAppPredictionPanelIds:(id)arg1;
- (void)setCompletedSessions:(id)arg1;
- (void)setCurrentlyTrackedSessions:(id)arg1;
- (void)setMostRecentActionSpotlightBlendingCacheUUID:(id)arg1;
- (void)setMostRecentAppSpotlightBlendingCacheUUID:(id)arg1;
- (void)setMostRecentClientCacheUpdateUUIDByClientModelId:(id)arg1;
- (void)setMostRecentHomescreenBlendingCacheUUID:(id)arg1;
- (void)setSuggestionsWidgetIds:(id)arg1;
- (id)suggestionsWidgetIds;
- (void)updateWithBlendingUICacheUpdate:(id)arg1;
- (void)updateWithClientModelCacheUpdate:(id)arg1;
- (void)updateWithUIEvent:(id)arg1;

@end
