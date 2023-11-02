
@interface EDAMSyncState : FATObject {
    NSNumber * _businessSummaryUpdated;
    EDAMClientSyncRateConfig * _clientSyncRateConfig;
    NSNumber * _communicationEngineUpdateId;
    NSNumber * _currentDevicesUsed;
    NSNumber * _currentTime;
    NSNumber * _fullSyncBefore;
    NSNumber * _showChoiceScreen;
    NSNumber * _updateCount;
    NSNumber * _uploaded;
    NSNumber * _userLastUpdated;
    NSNumber * _userMaxMessageEventId;
}

@property (nonatomic, retain) NSNumber *businessSummaryUpdated;
@property (nonatomic, retain) EDAMClientSyncRateConfig *clientSyncRateConfig;
@property (nonatomic, retain) NSNumber *communicationEngineUpdateId;
@property (nonatomic, retain) NSNumber *currentDevicesUsed;
@property (nonatomic, retain) NSNumber *currentTime;
@property (nonatomic, retain) NSNumber *fullSyncBefore;
@property (nonatomic, retain) NSNumber *showChoiceScreen;
@property (nonatomic, retain) NSNumber *updateCount;
@property (nonatomic, retain) NSNumber *uploaded;
@property (nonatomic, retain) NSNumber *userLastUpdated;
@property (nonatomic, retain) NSNumber *userMaxMessageEventId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)businessSummaryUpdated;
- (id)clientSyncRateConfig;
- (id)communicationEngineUpdateId;
- (id)currentDevicesUsed;
- (id)currentTime;
- (id)fullSyncBefore;
- (void)setBusinessSummaryUpdated:(id)arg1;
- (void)setClientSyncRateConfig:(id)arg1;
- (void)setCommunicationEngineUpdateId:(id)arg1;
- (void)setCurrentDevicesUsed:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setFullSyncBefore:(id)arg1;
- (void)setShowChoiceScreen:(id)arg1;
- (void)setUpdateCount:(id)arg1;
- (void)setUploaded:(id)arg1;
- (void)setUserLastUpdated:(id)arg1;
- (void)setUserMaxMessageEventId:(id)arg1;
- (id)showChoiceScreen;
- (id)updateCount;
- (id)uploaded;
- (id)userLastUpdated;
- (id)userMaxMessageEventId;

@end
