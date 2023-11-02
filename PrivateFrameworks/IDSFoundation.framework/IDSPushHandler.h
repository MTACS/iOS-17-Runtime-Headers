
@interface IDSPushHandler : NSObject <APSConnectionDelegate> {
    APSConnection * _apsConnection;
    NSData * _cachedPushToken;
    NSMapTable * _handlerMap;
    NSString * _namedDelegatePort;
    NSMutableSet * _nonWakingTopicsCache;
    NSMutableSet * _opportunisticTopicsCache;
    NSRecursiveLock * _recursiveLock;
    bool  _shouldWaitToSetTopics;
    NSMutableSet * _wakingTopicsCache;
}

@property (nonatomic, retain) APSConnection *apsConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, retain) NSString *namedDelegatePort;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic) bool shouldWaitToSetTopics;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedInstanceWithPortName:(id)arg1;

- (void).cxx_destruct;
- (id)_apsConnectionPushToken;
- (id)_getValidPushHandlersWithSelector:(SEL)arg1 topic:(id)arg2 command:(id)arg3;
- (void)_powerLogEvent:(id)arg1 dictionary:(id)arg2;
- (void)_powerLogIncomingMessage:(id)arg1 command:(id)arg2 topic:(id)arg3;
- (void)_recalculateTopicsCache;
- (void)_updateTopics;
- (bool)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)addListener:(id)arg1 wakingTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 commands:(id)arg5 queue:(id)arg6;
- (id)apsConnection;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (struct __SecIdentity { }*)copyPushIdentity;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(id)arg1;
- (bool)isConnected;
- (id)namedDelegatePort;
- (id)pushToken;
- (void)removeListener:(id)arg1;
- (void)setApsConnection:(id)arg1;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setNamedDelegatePort:(id)arg1;
- (void)setShouldWaitToSetTopics:(bool)arg1;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)setWakingTopics:(id)arg1 opportunisticTopics:(id)arg2 nonWakingTopics:(id)arg3 forListener:(id)arg4;
- (bool)shouldWaitToSetTopics;
- (void)subscribeToChannel:(id)arg1 forTopic:(id)arg2;
- (void)writePushPayloadToDiskIfEnabled:(id)arg1 topic:(id)arg2;

@end
