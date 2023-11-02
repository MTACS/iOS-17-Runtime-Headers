
@interface IMDaemonListener : NSObject <IMDaemonListening, IMDaemonListening_Internal>

@property (nonatomic, readonly) NSMutableDictionary *_contexts;
@property (setter=_setHidingDisconnect:, nonatomic) bool _hidingDisconnect;
@property (nonatomic, readonly) NSArray *allServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPostedSetupComplete;
@property (readonly) unsigned long long hash;
@property (getter=isHoldingChatMessages, nonatomic, readonly) bool holdingChatMessages;
@property (nonatomic, readonly) unsigned int myIdleTime;
@property (nonatomic, readonly) unsigned long long myStatus;
@property (nonatomic, readonly) NSString *myStatusMessage;
@property (nonatomic, readonly) NSDictionary *persistentProperties;
@property (nonatomic, readonly) NSDictionary *properties;
@property (getter=isSetupComplete, nonatomic, readonly) bool setupComplete;
@property (nonatomic, readonly) bool shouldHoldChatMessages;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long vcCapabilities;

- (id)_contexts;
- (bool)_hidingDisconnect;
- (void)_resetPostedSetupCompleted;
- (void)_setHidingDisconnect:(bool)arg1;
- (void)_setStamp:(id)arg1 forContext:(id)arg2;
- (id)_stampForContext:(id)arg1;
- (void)addHandler:(id)arg1;
- (id)allServices;
- (bool)hasPostedSetupComplete;
- (void)holdChatMessages;
- (bool)isHoldingChatMessages;
- (bool)isSetupComplete;
- (unsigned int)myIdleTime;
- (unsigned long long)myStatus;
- (id)myStatusMessage;
- (id)persistentProperties;
- (id)properties;
- (void)releaseHeldChatMessages;
- (void)removeHandler:(id)arg1;
- (id)serviceWithName:(id)arg1;
- (bool)shouldHoldChatMessages;
- (id)valueOfPersistentProperty:(id)arg1;
- (id)valueOfProperty:(id)arg1;
- (unsigned long long)vcCapabilities;

@end
