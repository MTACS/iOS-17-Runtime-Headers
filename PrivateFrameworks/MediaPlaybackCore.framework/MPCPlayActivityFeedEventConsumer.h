
@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSArray * _allowedBundleIds;
    NSMutableArray * _radioPlayActivityEvents;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *radioPlayActivityEvents;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2;
- (bool)_finalizePAFEvents:(id)arg1;
- (id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3;
- (id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1;
- (id)_generatePlaybackEndEventFromEvent:(id)arg1 withQueueSectionIdentifier:(id)arg2 itemIdentifier:(id)arg3 cursor:(id)arg4;
- (double)_getPlaybackDurationForHLSStreamFromStartEvent:(id)arg1 toEndEvent:(id)arg2 withLimitedCursor:(id)arg3;
- (double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginEvent:(id)arg3 cursor:(id)arg4;
- (bool)_handleApplicationTerminationEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemEndEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2;
- (bool)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2;
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;
- (bool)_itemIsPlaceholderFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;
- (bool)_itemIsPlayingFromQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;
- (bool)_itemWithinHLSTimedMetadataBeginFromQueueSection:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3;
- (void)_sendPlayEndNotificationWithStartTime:(double)arg1 endTime:(double)arg2 pafEvent:(id)arg3 cursor:(id)arg4;
- (void)_updateAllowedBundleIdsIfNecessary:(id)arg1;
- (void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3;
- (void)_updatePAFEvent:(id)arg1 withAudioChangeEvent:(id)arg2;
- (void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2;
- (void)_updatePAFEvent:(id)arg1 withEnqueuerAccountIdentifier:(id)arg2 queueAddEvent:(id)arg3 cursor:(id)arg4;
- (void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4 forEventType:(id)arg5;
- (void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4;
- (void)_updatePAFEvent:(id)arg1 withSharedListeningInfoFromCursor:(id)arg2;
- (void)_updatePAFEvent:(id)arg1 withVocalAttenuationInfoForEndEvent:(id)arg2 cursor:(id)arg3;
- (bool)_vocalControlIsOnForEvent:(id)arg1;
- (id)init;
- (id)radioPlayActivityEvents;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
