
@interface HMDSoftwareUpdateEventListenerContext : HMFObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMESubscriptionProviding> * _subscriptionProvider;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) unsigned long long hash;
@property (readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property (readonly) long long softwareUpdateStatusForLastEvent;
@property (readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *topicForSoftwareUpdateDescriptor;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (id)eventStoreReadHandle;
- (void)handleSoftwareUpdateDidBecomeAvailableWithDescriptor:(id)arg1;
- (id)initWithAccessory:(id)arg1 subscriptionProvider:(id)arg2 eventStoreReadHandle:(id)arg3;
- (id)logIdentifier;
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2 completion:(id /* block */)arg3;
- (id)softwareUpdateDescriptorForLastEvent;
- (long long)softwareUpdateStatusForLastEvent;
- (id)subscriptionProvider;
- (id)topicForSoftwareUpdateDescriptor;
- (void)updateAppBadgeAndBulletinNotification;

@end
