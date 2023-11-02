
@interface ATXBlendingLayerSessionLogger : NSObject <ATXBlendingLayerSessionLoggerProtocol> {
    NSArray * _blendingEvents;
    NSArray * _clientModelEvents;
    NSArray * _ermEvents;
    ATXBlendingLayerHyperParameters * _hyperParameters;
    NSMutableDictionary * _mostRecentBlendingCacheUpdateByConsumerSubType;
    ATXPredictionContext * _mostRecentPredictionContext;
    ATXHomeScreenEvent * _mostRecentScreenLockEvent;
    NSDate * _now;
    NSArray * _predictionContextEvents;
    <ATXPETEventTracker2Protocol> * _tracker;
    NSArray * _uiEvents;
}

@property (nonatomic, retain) NSArray *blendingEvents;
@property (nonatomic, retain) NSArray *clientModelEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *ermEvents;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *now;
@property (nonatomic, retain) NSArray *predictionContextEvents;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *uiEvents;

- (void).cxx_destruct;
- (id)blendingEvents;
- (id)clientModelCacheUpdatesFromBlendingCacheUpdate:(id)arg1;
- (id)clientModelEvents;
- (id)clientModelPublisher;
- (id)ermEvents;
- (id)generateSessionLog;
- (id)init;
- (id)initWithTracker:(id)arg1 hyperParameters:(id)arg2;
- (int)locationTypeFromLocationOfInterest:(id)arg1;
- (bool)logCurrentSessionIfPossible;
- (void)logSessionLogToPET:(id)arg1;
- (id)now;
- (id)orderedMergeERMBlendingContextUIPublisher;
- (id)predictionContextEvents;
- (id)sessionBlendingUpdateFromBlendingUICacheUpdate:(id)arg1 deviceContext:(id)arg2;
- (id)sessionClientModelUpdatesForUICacheUpdate:(id)arg1;
- (id)sessionDeviceContextFromPredictionContext:(id)arg1;
- (id)sessionERMEventFromERMEvent:(id)arg1;
- (id)sessionSuggestionFromProactiveSuggestion:(id)arg1;
- (id)sessionUICacheForUICacheUpdate:(id)arg1;
- (void)setBlendingEvents:(id)arg1;
- (void)setClientModelEvents:(id)arg1;
- (void)setErmEvents:(id)arg1;
- (void)setNow:(id)arg1;
- (void)setPredictionContextEvents:(id)arg1;
- (void)setUiEvents:(id)arg1;
- (bool)shouldLogSession;
- (id)uiEvents;

@end
