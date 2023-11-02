
@interface CPActivitySession : NSObject <CPLaunchableActivitySession, NSXPCListenerDelegate, RBSAssertionObserving> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void activeParticipants;
    void activeParticipantsUpdateItem;
    void activity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activityInterval;
    void applicationState;
    void audioSessionID;
    void capabilities;
    void connection;
    void distributionCount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  domainAssertion;
    void endpoint;
    void foregroundPresentationSubject;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void isFirstJoin;
    void isLightweightPrimaryInitiated;
    void isLocallyInitiated;
    void isUsingAirplay;
    void listener;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  localCreationTimestamp;
    void notificationCenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  permittedJoinTimestamp;
    void persistentSceneIdentifier;
    void queue;
    void rtcReporter;
    void sessionManager;
    void terminatingHandle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) TUConversationActivity *activity;
@property (nonatomic, retain) TUConversationActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *persistentSceneIdentifier;
@property (nonatomic, copy) NSString *persistentSceneIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TUConversationActivitySession *tuConversationActivitySession;

- (void).cxx_destruct;
- (id)UUID;
- (id)activity;
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)assertionWillInvalidate:(id)arg1;
- (void)associateSceneWithPersistentIdentifier:(id)arg1;
- (void)associateSceneWithSceneID:(id)arg1;
- (void)dealloc;
- (id)endpoint;
- (id)identifier;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)permitJoin;
- (id)persistentSceneIdentifier;
- (void)receivedResourceAtURL:(id)arg1 withMetadata:(id)arg2 fromParticipantIdentifier:(unsigned long long)arg3;
- (void)resetSession;
- (void)setActivity:(id)arg1;
- (void)setPersistentSceneIdentifier:(id)arg1;
- (id)tuConversationActivitySession;
- (void)updateActivityImage:(id)arg1;

@end
