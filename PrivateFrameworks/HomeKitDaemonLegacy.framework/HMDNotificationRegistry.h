
@interface HMDNotificationRegistry : HMFObject <HMFLogging, HMFTimerDelegate, NSSecureCoding> {
    NSHashTable * _delegates;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _notificationRegistry;
    NSMutableSet * _pendingRequests;
    HMFTimer * _pendingRequestsRetryTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2;
- (void)clearAllRegistrations;
- (void)configureWithHome:(id)arg1;
- (bool)disableNotificationForAudioAnalysisEventNotificationOption:(unsigned long long)arg1 user:(id)arg2 accessory:(id)arg3;
- (bool)disableReachabilityEventNotificationForAccessoryUUIDs:(id)arg1 forUserID:(id)arg2;
- (bool)enableNotificationForAudioAnalysisEventNotificationOption:(unsigned long long)arg1 user:(id)arg2 accessory:(id)arg3;
- (bool)enableReachabilityEventNotificationForAccessoryUUIDs:(id)arg1 forUserID:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)filterCharacteristics:(id)arg1 forUser:(id)arg2;
- (id)filterProperties:(id)arg1 forUser:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPendingRequestsRetryTimer:(id)arg1;
- (id)logIdentifier;
- (id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg1;
- (void)removeAllReachabilityEventNotificationRegistrations;
- (void)removeRegistrationsForCharacteristics:(id)arg1;
- (bool)removeRegistrationsForMediaProfile:(id)arg1;
- (bool)setNotificationsEnabled:(bool)arg1 forUserID:(id)arg2 characteristicsPayload:(id)arg3 mediaPropertiesPayload:(id)arg4;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;
- (id)userIDsRegisteredForReachabilityEventNotificationsForAccessoryUUIDs:(id)arg1;
- (id)usersRegisteredForNotificationsForAudioAnalysisEventNotificationOption:(unsigned long long)arg1 accessory:(id)arg2;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg1;
- (id)usersRegisteredForNotificationsForProperties:(id)arg1;

@end
