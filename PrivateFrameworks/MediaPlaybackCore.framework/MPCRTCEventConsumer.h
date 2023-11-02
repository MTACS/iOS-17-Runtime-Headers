
@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    MPCPlaybackEngineEvent * _cachedFirstItemAssetLoadEvent;
    NSObject<OS_dispatch_group> * _rtcGroup;
    NSObject<OS_dispatch_queue> * _rtcQueue;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
    <MPCRTCEventConsumerTestingDelegate> * _testingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;
@property (nonatomic) <MPCRTCEventConsumerTestingDelegate> *testingDelegate;

+ (id)NSStringFromMPCRTCReportingEventCategory:(long long)arg1;
+ (id)dateFormatter;
+ (id)identifier;
+ (id)identifierStringFromItemIdentifiers:(id)arg1 radioIdentifiers:(id)arg2;
+ (id)playerServiceNameWithPlayerID:(id)arg1;
+ (id)rtcIdentifiersFromRadioIdentifiers:(id)arg1;
+ (id)rtcIdentifiersFromUniversalIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)_accountSnapshotWithCursor:(id)arg1;
- (void)_generateConfiguredReportingSessionWithSamplingUUID:(id)arg1 serviceName:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleReportingForItemStartEvent:(id)arg1 event:(id)arg2;
- (id)_itemAssetTypeFromItemAssetLoadEvent:(id)arg1 cursor:(id)arg2;
- (id)_itemStartIncitingEvent:(id)arg1 fromItemStartEvent:(id)arg2;
- (bool)_itemWasPreviouslyLoaded:(id)arg1 cursor:(id)arg2;
- (id)_mediaIdentifierFromItemAssetLoadEndEvent:(id)arg1 cursor:(id)arg2;
- (id)_payloadForItemAssetLoad:(id)arg1 fromItemEvent:(id)arg2;
- (id)_payloadForItemSummary:(id)arg1 fromEvent:(id)arg2;
- (id)_payloadForItemSummary:(id)arg1 fromItemEvent:(id)arg2;
- (id)_payloadForQueueLoad:(id)arg1 fromQueueLoadEndEvent:(id)arg2;
- (id)_payloadForSessionStart:(id)arg1 fromEvent:(id)arg2;
- (id)_payloadForSessionSummary:(id)arg1 fromEvent:(id)arg2;
- (void)_performABCSnapshotWithPayloadIfNecessary:(id)arg1;
- (id)_reasonForEndEvent:(id)arg1 cursor:(id)arg2;
- (id)_rtcSessionInfoWithSamplingUUID:(id)arg1;
- (id)_rtcUserInfoWithServiceName:(id)arg1;
- (void)_sendOneMessageWithCategory:(long long)arg1 type:(long long)arg2 payload:(id)arg3;
- (void)_sendQueueLoadEventIfNeeded:(id)arg1 forItemEvent:(id)arg2;
- (void)_sendReportForItemAssetLoad:(id)arg1 event:(id)arg2;
- (void)_sendReportForItemSummary:(id)arg1 event:(id)arg2;
- (void)_sendReportForItemSummaryWithEndReason:(id)arg1 cursor:(id)arg2 event:(id)arg3;
- (void)_sendReportForSessionStart:(id)arg1 event:(id)arg2 withType:(long long)arg3;
- (void)_sendReportForSessionSummary:(id)arg1 event:(id)arg2 withType:(long long)arg3;
- (void)_sendReportWithSession:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4;
- (void)_sendSessionStartIfNeeded:(id)arg1 forItemEvent:(id)arg2;
- (id)_tapToPlayMetrics:(id)arg1 fromItemStartEvent:(id)arg2;
- (id)_underlyingErrorFromPayload:(id)arg1;
- (void)_updateAssetSelectionEvent:(id)arg1 fromAssetLoadEndEvent:(id)arg2 untilAssetLoadBeginEvent:(id)arg3 cursor:(id)arg4;
- (id)init;
- (void)setTestingDelegate:(id)arg1;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (id)testingDelegate;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
