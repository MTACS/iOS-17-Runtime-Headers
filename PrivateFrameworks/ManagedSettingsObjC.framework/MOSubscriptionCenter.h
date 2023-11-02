
@interface MOSubscriptionCenter : NSObject <MOManagedSettingsSubscriberProxy> {
    NSObject * _connectionLock;
    NSXPCConnection * _currentConnection;
    MOPassthroughSubject * _effectiveSubject;
    NSMutableDictionary * _effectiveSubscriptions;
    NSObject * _subscriptionLock;
}

@property (nonatomic, readonly) NSObject *connectionLock;
@property (nonatomic, retain) NSXPCConnection *currentConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *effectiveInterestedGroups;
@property (nonatomic, readonly) MOPassthroughSubject *effectiveSubject;
@property (nonatomic, readonly) NSMutableDictionary *effectiveSubscriptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *subscriptionLock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (void)clearCurrentConnectionAndInvalidate:(bool)arg1;
- (id)connectionLock;
- (id)currentConnection;
- (void)dealloc;
- (id)effectiveInterestedGroups;
- (void)effectiveSettingsChangedForGroups:(id)arg1;
- (id)effectiveSubject;
- (id)effectiveSubscriptions;
- (id)init;
- (void)setCurrentConnection:(id)arg1;
- (void)subscribeForEffectiveChanges:(id)arg1 identifier:(id)arg2;
- (id)subscriptionLock;
- (void)unsubscribeFromEffectiveChanges:(id)arg1;
- (void)updateSubscription;
- (id)xpcConnection;

@end
