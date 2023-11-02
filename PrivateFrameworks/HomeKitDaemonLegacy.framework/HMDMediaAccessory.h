
@interface HMDMediaAccessory : HMDAccessory <HMFLogging> {
    HMDMediaAccessoryAdvertisement * _advertisement;
    HMDMediaProfile * _mediaProfile;
    NSNotificationCenter * _notificationCenter;
}

@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDMediaProfile *mediaProfile;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createMediaProfile;
- (void)_registerForMessages;
- (bool)_shouldFilterAccessoryProfile:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (void)addHostedAccessory:(id)arg1;
- (id)advertisement;
- (id)assistantObject;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRoomChanged:(id)arg1;
- (void)handleRoomNameChanged:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)mediaProfile;
- (id)name;
- (id)notificationCenter;
- (void)notifyConnectivityChangedWithReachabilityState:(bool)arg1;
- (bool)providesHashRouteID;
- (long long)reachableTransports;
- (void)removeAdvertisement:(id)arg1;
- (void)removeHostedAccessory:(id)arg1;
- (void)setAdvertisement:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (unsigned long long)supportedTransports;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)transportReports;
- (id)urlString;

@end
