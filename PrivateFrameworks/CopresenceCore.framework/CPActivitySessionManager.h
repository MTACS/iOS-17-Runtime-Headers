
@interface CPActivitySessionManager : NSObject <CPActivitySessionManager, CPAudioPolicyStateObserver, CPSystemStateObserverObserver, CopresenceCore.CPApplicationObserverProtocol> {
    void $__lazy_storage_$_protectedStorage;
    void _activitySessionCreation;
    void _activitySessions;
    void _topicsObserverGenerator;
    void applicationController;
    void applicationLauncher;
    void audioRoutePolicyManager;
    void delegate;
    void featureFlags;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  groupUUID;
    void handedOff;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void queue;
    void serverBag;
    void systemStateObserver;
    void topicsObserver;
}

@property (nonatomic, readonly) NSSet *activitySessions;
@property (nonatomic) <CPActivitySessionManagerDelegate> *delegate;
@property (nonatomic) bool handedOff;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSSet *tuActivitySessions;
@property (nonatomic, readonly) NSSet *tuSystemActivitySessions;

+ (bool)supportsMultipleActivitySessions;

- (void).cxx_destruct;
- (id)activitySessions;
- (void)applicationController:(id)arg1 bundleIdentifierChanged:(id)arg2;
- (void)audioPolicyManager:(id)arg1 sharePlayAllowedStateChanged:(bool)arg2;
- (id)createActivitySessionWithTuActivitySession:(id)arg1;
- (id)delegate;
- (bool)handedOff;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 groupUUID:(id)arg2 activities:(id)arg3 applicationController:(id)arg4 delegate:(id)arg5 queue:(id)arg6 systemStateObserver:(id)arg7;
- (void)leaveActivitySessionWithUUID:(id)arg1;
- (void)presentSessionDismissalAlertForActivitySessionUUID:(id)arg1 allowingCancellation:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)refreshDataCryptors;
- (void)removeActivitySessionWithUUID:(id)arg1 usingHandle:(id)arg2;
- (void)resetNonScreenSharingSessions;
- (void)resetSceneAssociationsForBundleID:(id)arg1;
- (void)resetSessions;
- (void)setDelegate:(id)arg1;
- (void)setHandedOff:(bool)arg1;
- (void)setUsingAirplay:(bool)arg1 forActivitySessionWithUUID:(id)arg2;
- (void)systemStateObserver:(id)arg1 sharePlayAllowedStateChanged:(bool)arg2;
- (id)tuActivitySessions;
- (id)tuSystemActivitySessions;
- (void)updateActivitySessionWithUUID:(id)arg1 activity:(id)arg2;
- (void)updateVirtualParticipantIdentifier:(unsigned long long)arg1;

@end
