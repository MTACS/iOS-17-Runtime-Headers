
@interface IAMMessageCoordinator : NSObject <IAMEventReceiver, IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <IAMApplicationContextProvider> * _applicationContext;
    NSMutableDictionary * _completionHandlersForObservedEvents;
    IAMImpressionManager * _impressionManager;
    bool  _isReadyToEvaluateMessages;
    NSDate * _lastDisplayTimeGlobalPresentationPolicyGroupNormal;
    NSDate * _lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
    IAMMessageEntryManager * _messageEntryManager;
    NSDictionary * _messageGroupsByGroupIdentifier;
    NSMutableDictionary * _messageTargetsByTargetIdentifier;
    NSMutableDictionary * _messageTargetsRequiringNilPriorityMessageNotificationAfterRegistrationByTargetIdentifier;
    NSDictionary * _metadataEntryByMessageIdentifier;
    <IAMMessageMetricsDelegate> * _metricsDelegate;
    IAMModalTarget * _modalTarget;
    NSString * _modalTargetIdentifier;
    NSMutableArray * _pendingTriggerContexts;
    NSMutableDictionary * _priorityMessageEntryByTargetIdentifier;
    IAMStorageCoordinator * _storageCoordinator;
}

@property (nonatomic) <IAMApplicationContextProvider> *applicationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <IAMMessageMetricsDelegate> *metricsDelegate;
@property (readonly) Class superclass;

+ (id)_createMessageFromMessageEntry:(id)arg1 replacingResourcePathsWithCachedResourceLocations:(bool)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1;
- (id)_dequeuePendingTriggerContexts;
- (void)_enqueuePendingTriggerContext:(id)arg1;
- (void)_evaluateMessagesForAllActiveTargets;
- (void)_fetchMessagesAndMetadataFromStorageCoordinator:(id /* block */)arg1;
- (id)_filterActiveTargetIdentifiers:(id)arg1;
- (void)_handleMessageReachedMaximumDisplayCount:(id)arg1;
- (void)_handleUpdatedMessageEntries:(id)arg1 andMetadata:(id)arg2;
- (void)_incrementNumberOfDisplaysForMessageEntry:(id)arg1;
- (id)_messageBundleIdentifiers;
- (id)_metadataEntryForMessageIdentifier:(id)arg1;
- (void)_notifyMessageTargets:(id)arg1 withTargetIdentifier:(id)arg2 didUpdatePriorityMessageFromEntry:(id)arg3 observedEventName:(id)arg4;
- (void)_processObservedEventCallbacksforEventName:(id)arg1 willTriggerPresentation:(bool)arg2 messageIdentifier:(id)arg3;
- (void)_reevaluateMessageEntries:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(bool)arg3 withObservedEventName:(id)arg4;
- (void)_reevaluateTargetsWithIdentifiers:(id)arg1 forTriggerContext:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(bool)arg3;
- (void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)arg1;
- (void)_reportHoldoutMessageWouldAppear:(id)arg1;
- (void)_reportMessageAction:(id)arg1 wasPerformedInMessageEntry:(id)arg2 fromTargetWithIdentifier:(id)arg3;
- (void)_setMessageGroups:(id)arg1;
- (void)_startStorageCoordinatorWithMessageEntryProvider:(id)arg1 messageMetadataStorage:(id)arg2 propertyStorage:(id)arg3;
- (void)_updateLastDisplayTime:(id)arg1 forMessageEntry:(id)arg2;
- (void)_updateMetadata:(id)arg1 forMessageEntry:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateMetadataOfMessageEntriesByTrigger:(id)arg1 forReceivedEvent:(id)arg2;
- (void)_updatePriorityMessageEntry:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfNonNil:(bool)arg3 observedEventName:(id)arg4;
- (id)applicationContext;
- (id)beginObservingTriggerEvent:(id)arg1 withHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)endObservingTriggerEvent:(id)arg1 forToken:(id)arg2;
- (void)impressionManager:(id)arg1 impressionDidEndForMessageEntry:(id)arg2;
- (void)impressionManager:(id)arg1 shouldReportImpressionEventWithDictionary:(id)arg2;
- (id)init;
- (id)metricsDelegate;
- (void)receiveEvent:(id)arg1;
- (void)receiveTriggerEventContext:(id)arg1;
- (void)registerMessageTarget:(id)arg1;
- (void)reportApplicationContextPropertiesDidChange:(id)arg1;
- (void)reportChangedContextPropertiesContext:(id)arg1;
- (void)reportMessageDidAppearWithIdentifier:(id)arg1;
- (void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2;
- (void)reportMessageDidDisappearWithIdentifier:(id)arg1;
- (void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2;
- (void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2;
- (void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 fromTargetWithIdentifier:(id)arg3;
- (void)reportMetricsEvent:(id)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setMetricsDelegate:(id)arg1;
- (void)start;
- (void)startWithApplicationContext:(id)arg1;
- (void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2;
- (void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2 messageEntryProvider:(id)arg3 messageMetadataStorage:(id)arg4 propertyStorage:(id)arg5;
- (void)storageCoordinatorMessageEntriesChanged:(id)arg1;
- (void)triggerPresentationForMessageWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterMessageTarget:(id)arg1;

@end
