
@interface BMDaemon : NSObject <BMComputeSource, BMComputeXPCPublisherServerDelegate> {
    NSMutableDictionary * _activeSystemSubscriptionIdentifiers;
    <BMViewEventReporter> * _eventReporter;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subscribedSystemStreams;
    BMComputeXPCPublisherStorage * _systemBookmarkStorage;
    BMComputeXPCPublisherServer * _systemPublisherServer;
    BMComputeSourceServer * _systemSourceServer;
    BMComputeXPCPublisherClient * _systemStreamsPublisherClient;
    BMComputeXPCPublisherStorage * _userBookmarkStorage;
    BMComputeXPCPublisherServer * _userPublisherServer;
    BMComputeSourceServer * _userSourceServer;
}

@property (nonatomic, retain) NSMutableDictionary *activeSystemSubscriptionIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <BMViewEventReporter> *eventReporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *subscribedSystemStreams;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *systemBookmarkStorage;
@property (nonatomic, readonly) BMComputeXPCPublisherServer *systemPublisherServer;
@property (nonatomic, readonly) BMComputeSourceServer *systemSourceServer;
@property (nonatomic, retain) BMComputeXPCPublisherClient *systemStreamsPublisherClient;
@property (nonatomic, readonly) BMComputeXPCPublisherStorage *userBookmarkStorage;
@property (nonatomic, readonly) BMComputeXPCPublisherServer *userPublisherServer;
@property (nonatomic, readonly) BMComputeSourceServer *userSourceServer;

+ (id)BiomeAgentLaunchNotification;
+ (id)DSLValidator;
+ (void)_donateDeviceMetadata;
+ (bool)atLeastOneSegmentFileInDirectory:(id)arg1 fileManager:(id)arg2;
+ (id)biomedLaunchNotification;
+ (void)donateLaunchEvents;
+ (bool)isAgent;
+ (bool)isAgentOrEmbedded;
+ (id)loadDKStreamNameToTTL;
+ (id)new;
+ (void)pruneAppInFocusPosterBoardEvents;
+ (void)pruneEmptyRemoteStreams:(id)arg1;
+ (void)pruneFeatureStoreWithActivity:(id)arg1;
+ (void)prunePrivateStreamDirectory:(id)arg1 maxAge:(double)arg2 maxStreamSize:(unsigned long long)arg3 activity:(id)arg4;
+ (void)prunePublicStreamsWithActivity:(id)arg1;
+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)arg1 activity:(id)arg2;
+ (void)pruneRestrictedStreamsWithActivity:(id)arg1;
+ (void)pruneTemporaryFiles;
+ (void)pruneTemporaryFilesInDirectory:(id)arg1;
+ (void)registerXPCActivities;
+ (id)systemComputePublisherServiceName;
+ (id)systemComputePublisherStreamName;
+ (id)systemComputeSourceServiceName;
+ (id)userComputePublisherServiceName;
+ (id)userComputePublisherStreamName;
+ (id)userComputeSourceServiceName;

- (void).cxx_destruct;
- (id)_bookmarkStorage;
- (id)_publisherServer;
- (void)_subscribeStreamsForViews;
- (void)_subscribeSystemStream:(id)arg1 subscriptionIdentifier:(id)arg2 useCase:(id)arg3;
- (id)activeSystemSubscriptionIdentifiers;
- (id)eventReporter;
- (void)eventsPrunedWithStreamIdentifier:(id)arg1 reason:(unsigned long long)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1 eventReporter:(id)arg2;
- (void)publisherServer:(id)arg1 didAddSubscription:(id)arg2;
- (void)publisherServer:(id)arg1 didRemoveSubscription:(id)arg2;
- (id)queue;
- (void)sendEventWithStreamIdentifier:(id)arg1 timestamp:(id)arg2 storeEvent:(id)arg3;
- (void)setActiveSystemSubscriptionIdentifiers:(id)arg1;
- (void)setSubscribedSystemStreams:(id)arg1;
- (void)setSystemStreamsPublisherClient:(id)arg1;
- (void)setUpNotificationHandler;
- (id)subscribedSystemStreams;
- (id)systemBookmarkStorage;
- (id)systemPublisherServer;
- (id)systemSourceServer;
- (id)systemStreamsPublisherClient;
- (id)userBookmarkStorage;
- (id)userPublisherServer;
- (id)userSourceServer;

@end
