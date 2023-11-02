
@interface HDExampleFeatureProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDNotificationSyncClientDelegate> {
    HDFeatureAvailabilityManager * _featureAvailabilityManager;
    NSString * _featureIdentifier;
    HDNotificationSyncClient * _notificationSyncClient;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)notificationSyncClient:(id)arg1 didReceiveInstructionWithAction:(long long)arg2;

@end
